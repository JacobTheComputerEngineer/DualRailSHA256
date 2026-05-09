#include "KSAdder.cpp"
#include "shaStandards.cpp"

bit32 kConsts[64];

bit32 RR2(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+2)%32];
    
    return out;
}
bit32 RR6(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+6)%32];

    return out;
}
bit32 RR7(bit32 a)
{
    bit32 out;

    for(int i=0;i<32;i++) out.b[i] = a.b[(i+7)%32];

    return out;
}
bit32 RR8(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+8)%32];

    return out;
}
bit32 RR9(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+9)%32];

    return out;
}
bit32 RR11(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+11)%32];

    return out;
}
bit32 RR13(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+13)%32];

    return out;
}
bit32 RR17(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+17)%32];

    return out;
}
bit32 RR18(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+18)%32];

    return out;
}
bit32 RR19(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+19)%32];

    return out;
}
bit32 RR22(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+22)%32];

    return out;
}
bit32 RR25(bit32 a)
{
    bit32 out;
    
    for(int i=0;i<32;i++) out.b[i] = a.b[(i+25)%32];

    return out;
}

bit32 SR3(bit32 a)
{
    bit32 out;
    bit empty;
    empty.t = 0;
    empty.v = 0;

    for(int i=0 ; i<29 ; i++)
        out.b[i] = a.b[i+3];

    for(int i=29 ; i<32 ; i++)
        out.b[i] = empty;

    return out;
}
bit32 SR10(bit32 a)
{
    bit32 out;
    bit empty;
    empty.t = 0;
    empty.v = 0;

    for(int i=0 ; i<22 ; i++)
        out.b[i] = a.b[i+10];

    for(int i=22 ; i<32 ; i++)
        out.b[i] = empty;

    return out;
}

int getRoundLatestArrival(bit32 H[8])
{
    int out=0;

    for(int i=0;i<8;i++) if(H[i].t > out) out = H[i].t;

    return out;

}
int getRoundLatestArrival(bit32 a, bit32 b, bit32 c, bit32 d, bit32 e, bit32 f, bit32 g, bit32 h)
{
    int out=0;

    out = std::max({a.t, b.t, c.t, d.t, e.t, f.t, g.t, h.t});

    return out;

}

// By hand, critical path is 2 KSA32 and 1 XOR3
void fillRemainder(bit32 W[64], int t)
{
    bit cin; cin.v = 0;
    bit32 s0 = XOR3(RR7(W[t-15]), RR18(W[t-15]), SR3(W[t-15]));
    bit32 s1 = XOR3(RR17(W[t-2]), RR19(W[t-2]), SR10(W[t-2]));
    W[t] = KSA32(KSA32(W[t-16], s0, cin).B, KSA32(W[t-7], s1, cin).B, cin).B;

    // std::cout << "fill.t = " << W[t].t << std::endl;
}

// By hand, critical path is 4 KSA32, 1 XOR2, 1 AND, 1 NOT  - THIS IS RATE LIMITER
void compressionLoop(bit32 W, bit32 k, bit32 &a, bit32 &b, bit32 &c, bit32 &d, bit32 &e, bit32 &f, bit32 &g, bit32 &h)
{
    bit cin;
    cin.v = 0;

    bit32 S1 = XOR3(RR6(e), RR11(e), RR25(e));
    bit32 ch = XOR2(AND(e, f), AND(NOT(e), g));
    bit32 temp1 = KSA32(KSA32(KSA32(h, S1, cin).B, KSA32(ch, k, cin).B, cin).B, W, cin).B;

    bit32 S0 = XOR3(RR2(a), RR13(a), RR22(a));
    bit32 maj = XOR3(AND(a, b), AND(a, c), AND(b, c));
    bit32 temp2 = KSA32(S0, maj, cin).B;

    h = g;
    g = f;
    f = e;
    e = KSA32(d, temp1, cin).B;
    d = c;
    c = b;
    b = a;
    a = KSA32(temp1, temp2, cin).B;

    int max = std::max({a.t, b.t, c.t, d.t, e.t, f.t, g.t, h.t});
    a.t = max;
    b.t = max;
    c.t = max;
    d.t = max;
    e.t = max;
    f.t = max;
    g.t = max;
    h.t = max;

    // std::cout << "compression.t = " << a.t << std::endl;

}

// By hand, critical path is 1 KSA32
void finalAdd(bit32 H[8], bit cin, bit32 a, bit32 b, bit32 c, bit32 d, bit32 e, bit32 f, bit32 g, bit32 h)
{
    H[0] = KSA32(H[0], a, cin).B;
    H[1] = KSA32(H[1], b, cin).B;
    H[2] = KSA32(H[2], c, cin).B;
    H[3] = KSA32(H[3], d, cin).B;
    H[4] = KSA32(H[4], e, cin).B;
    H[5] = KSA32(H[5], f, cin).B;
    H[6] = KSA32(H[6], g, cin).B;
    H[7] = KSA32(H[7], h, cin).B;

    int max = 0;
    for(int i=0 ; i<8 ; i++) if(H[i].t > max) max = H[i].t;
    for(int i=0 ; i<8 ; i++) H[i].t = max;

    // std::cout << "H.t = " << a.t << std::endl;
}

std::vector<uint8_t> SHA256_Onecycle(std::vector<uint8_t> padded)
{

    bit32 H[8];
    uintTo32(&H[0], 0x6a09e667);
    uintTo32(&H[1], 0xbb67ae85);
    uintTo32(&H[2], 0x3c6ef372);
    uintTo32(&H[3], 0xa54ff53a);
    uintTo32(&H[4], 0x510e527f);
    uintTo32(&H[5], 0x9b05688c);
    uintTo32(&H[6], 0x1f83d9ab);
    uintTo32(&H[7], 0x5be0cd19);

    bit32 W[64];
    for(int i=0 ; i<64 ; i++) uintTo32(&W[i], 0);
    for(int i=0 ; i<16 ; i++) uintTo32(&W[i], (padded[i * 4] << 24) | (padded[i * 4 + 1] << 16) | (padded[i * 4 + 2] << 8) | (padded[i * 4 + 3]));

    for(int i=16 ; i<64 ; i++) 
    {
        fillRemainder(W, i);
    }

    bit32 a = H[0];
    bit32 b = H[1];
    bit32 c = H[2];
    bit32 d = H[3];
    bit32 e = H[4];
    bit32 f = H[5];
    bit32 g = H[6];
    bit32 h = H[7];

    for(int i=0 ; i<64 ; i++) 
    {
        compressionLoop(W[i], kConsts[i], a, b, c, d, e, f, g, h);
    }

    bit cin;
    cin.v = 0;

    finalAdd(H, cin, a, b, c, d, e, f, g, h);

    std::cout << getRoundLatestArrival(H) << std::endl;

    // Convert final hash to bytes
    std::vector<uint8_t> digest;

    for (int i = 0; i < 8; ++i)
    {
        digest.push_back((bits32ToUint(H[i]) >> 24) & 0xFF);
        digest.push_back((bits32ToUint(H[i]) >> 16) & 0xFF);
        digest.push_back((bits32ToUint(H[i]) >> 8) & 0xFF);
        digest.push_back(bits32ToUint(H[i]) & 0xFF);
    }

    return digest;

}

enum cellState {EMPTY, START, BUSY, DONE};
class cell
{
    public:
        bool active; // Added for this one only
        cellState state;
        bit32 W[64];
        bit32 H[8];
        bit32 a, b, c, d, e, f, g, h;
        int endCount;
        cell()
        {
            state = EMPTY;
            active = 0;
        }
        void moveData(cell &old)
        {
            for(int i=0 ; i<64 ; i++)
                W[i].set(old.W[i]);
            for(int i=0 ; i<8 ; i++)
                H[i].set(old.H[i]);
            a.set(old.a);
            b.set(old.b);
            c.set(old.c);
            d.set(old.d);
            e.set(old.e);
            f.set(old.f);
            g.set(old.g);
            h.set(old.h);
        }
        void setGateCount(int gc)
        {
            for(int i=0 ; i<64 ; i++)
                W[i].setGC(gc);
            for(int i=0 ; i<8 ; i++)
                H[i].setGC(gc);
            a.setGC(gc);
            b.setGC(gc);
            c.setGC(gc);
            d.setGC(gc);
            e.setGC(gc);
            f.setGC(gc);
            g.setGC(gc);
            h.setGC(gc);
        }
};

std::vector<std::vector<uint8_t>> SHA256_Pipelined(std::vector<std::vector<uint8_t>> &paddeds)
{
    std::ofstream file("shaPIPELINED.txt");

    int endingTimes[vectorLength] = {0};
    std::vector<std::vector<uint8_t>> finalOuts;
    // 48 cells of fill remainder
    // 64 cells of compression
    // 1 cell of final H addition
    std::vector<cell> c(113);

    int gateCount = 0;

    bit32 H[8];
    uintTo32(&H[0], 0x6a09e667);
    uintTo32(&H[1], 0xbb67ae85);
    uintTo32(&H[2], 0x3c6ef372);
    uintTo32(&H[3], 0xa54ff53a);
    uintTo32(&H[4], 0x510e527f);
    uintTo32(&H[5], 0x9b05688c);
    uintTo32(&H[6], 0x1f83d9ab);
    uintTo32(&H[7], 0x5be0cd19);

    bit cin;
    cin.v = 0;

    int paddedsInCounter = 0;
    int paddedsOutCounter = 0;

    do
    {

        for(int i=112 ; i>=0 ; i--)
        {
            if(c[i].active)
            {
                if(i==112)
                {
                    finalAdd(c[i].H, cin, c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                }
                if(i <= 111 && i >= 48)
                {
                    compressionLoop(c[i].W[i-48], kConsts[i-48], c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                }
                if(i <= 47 && i >=0)
                {
                    fillRemainder(c[i].W, i+16);
                }
            }
        }

        if(c[112].active)
        {
            c[112].active = 0;
            std::vector<uint8_t> digest;

            for (int j = 0; j < 8; ++j)
            {
                digest.push_back((bits32ToUint(c[112].H[j]) >> 24) & 0xFF);
                digest.push_back((bits32ToUint(c[112].H[j]) >> 16) & 0xFF);
                digest.push_back((bits32ToUint(c[112].H[j]) >> 8) & 0xFF);
                digest.push_back(bits32ToUint(c[112].H[j]) & 0xFF);
            }

            finalOuts.push_back(digest);
            endingTimes[paddedsOutCounter] = gateCount;
            std::string myHash = toHex(digest);
            // std::cout << "Entry " << paddedsOutCounter << " exit time :\t" << endingTimes[paddedsOutCounter] << "\t" << myHash << std::endl;
            file << "Entry " << paddedsOutCounter << " exit time :\t" << endingTimes[paddedsOutCounter] << "\t" << myHash << std::endl;
            paddedsOutCounter++;
        }
        

        for(int i=112 ; i>0 ; i--) c[i] = c[i-1];
        if(paddedsInCounter < vectorLength)
        {
            // Initial state
            // Done in 0 time
            bit32 W[64];
            for(int i=0 ; i<64 ; i++) uintTo32(&W[i], 0);
            for(int i=0 ; i<16 ; i++) uintTo32(&W[i], (paddeds[paddedsInCounter][i * 4] << 24) | (paddeds[paddedsInCounter][i * 4 + 1] << 16) | (paddeds[paddedsInCounter][i * 4 + 2] << 8) | (paddeds[paddedsInCounter][i * 4 + 3]));

            for(int i=0 ; i<64 ; i++)
                c[0].W[i].set(W[i]);

            for(int i=0 ; i<8 ; i++)
                c[0].H[i].set(H[i]);

            c[0].setGateCount(gateCount);

            c[0].state = START;

            c[0].a.set(H[0]);
            c[0].b.set(H[1]);
            c[0].c.set(H[2]);
            c[0].d.set(H[3]);
            c[0].e.set(H[4]);
            c[0].f.set(H[5]);
            c[0].g.set(H[6]);
            c[0].h.set(H[7]);

            paddedsInCounter++;

            c[0].active = 1;
        }
        else c[0].active = 0;
        
        gateCount += 4*KSA32DELAY + XOR2DELAY + ANDDELAY + NOTDELAY;
    }
    while(paddedsOutCounter != vectorLength);

    file.close();

    return finalOuts;
}

int main()
{
     
    // Init constants bit style
    for(int i=0 ; i<64 ; i++) uintTo32(&kConsts[i], k[i]);

    std::vector<std::vector<uint8_t>> datas(vectorLength);
    for(int i=0;i<vectorLength;i++) datas[i] = std::vector<uint8_t>(inputs[i].begin(), inputs[i].end());

    std::vector<std::vector<uint8_t>> paddeds(vectorLength);
    for(int i=0;i<vectorLength;i++) paddeds[i] = padInput(datas[i]);

    std::vector<std::vector<uint8_t>> hashes = SHA256_Pipelined(paddeds);


    
    // std::string input = "abc";

    // // Convert string to bytes
    // std::vector<uint8_t> data(input.begin(), input.end());

    // // Pad input
    // std::vector<uint8_t> padded = padInput(data);

    // std::vector<uint8_t> hash = SHA256_Onecycle(padded);
    // std::string myHash = toHex(hash);

    // std::cout << myHash << "\n";

    // int i = findKSA32Delay();

}