#include "KSAdderDR.cpp"
#include "shaStandards.cpp"

DR32Bits kDRConsts[64];

DR32Bits DR_RR2(DR32Bits a)
{
    DR32Bits out;
    out.B0 = a.B2;
    out.B1 = a.B3;
    out.B2 = a.B4;
    out.B3 = a.B5;
    out.B4 = a.B6;
    out.B5 = a.B7;
    out.B6 = a.B8;
    out.B7 = a.B9;
    out.B8 = a.B10;
    out.B9 = a.B11;
    out.B10 = a.B12;
    out.B11 = a.B13;
    out.B12 = a.B14;
    out.B13 = a.B15;
    out.B14 = a.B16;
    out.B15 = a.B17;
    out.B16 = a.B18;
    out.B17 = a.B19;
    out.B18 = a.B20;
    out.B19 = a.B21;
    out.B20 = a.B22;
    out.B21 = a.B23;
    out.B22 = a.B24;
    out.B23 = a.B25;
    out.B24 = a.B26;
    out.B25 = a.B27;
    out.B26 = a.B28;
    out.B27 = a.B29;
    out.B28 = a.B30;
    out.B29 = a.B31;
    out.B30 = a.B0;
    out.B31 = a.B1;

    return out;
}
DR32Bits DR_RR6(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B6;
        out.B1 = a.B7;
        out.B2 = a.B8;
        out.B3 = a.B9;
        out.B4 = a.B10;
        out.B5 = a.B11;
        out.B6 = a.B12;
        out.B7 = a.B13;
        out.B8 = a.B14;
        out.B9 = a.B15;
        out.B10 = a.B16;
        out.B11 = a.B17;
        out.B12 = a.B18;
        out.B13 = a.B19;
        out.B14 = a.B20;
        out.B15 = a.B21;
        out.B16 = a.B22;
        out.B17 = a.B23;
        out.B18 = a.B24;
        out.B19 = a.B25;
        out.B20 = a.B26;
        out.B21 = a.B27;
        out.B22 = a.B28;
        out.B23 = a.B29;
        out.B24 = a.B30;
        out.B25 = a.B31;
        out.B26 = a.B0;
        out.B27 = a.B1;
        out.B28 = a.B2;
        out.B29 = a.B3;
        out.B30 = a.B4;
        out.B31 = a.B5;
        return out;
}
DR32Bits DR_RR7(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B7;
        out.B1 = a.B8;
        out.B2 = a.B9;
        out.B3 = a.B10;
        out.B4 = a.B11;
        out.B5 = a.B12;
        out.B6 = a.B13;
        out.B7 = a.B14;
        out.B8 = a.B15;
        out.B9 = a.B16;
        out.B10 = a.B17;
        out.B11 = a.B18;
        out.B12 = a.B19;
        out.B13 = a.B20;
        out.B14 = a.B21;
        out.B15 = a.B22;
        out.B16 = a.B23;
        out.B17 = a.B24;
        out.B18 = a.B25;
        out.B19 = a.B26;
        out.B20 = a.B27;
        out.B21 = a.B28;
        out.B22 = a.B29;
        out.B23 = a.B30;
        out.B24 = a.B31;
        out.B25 = a.B0;
        out.B26 = a.B1;
        out.B27 = a.B2;
        out.B28 = a.B3;
        out.B29 = a.B4;
        out.B30 = a.B5;
        out.B31 = a.B6;
        return out;
}
DR32Bits DR_RR8(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B8;
        out.B1 = a.B9;
        out.B2 = a.B10;
        out.B3 = a.B11;
        out.B4 = a.B12;
        out.B5 = a.B13;
        out.B6 = a.B14;
        out.B7 = a.B15;
        out.B8 = a.B16;
        out.B9 = a.B17;
        out.B10 = a.B18;
        out.B11 = a.B19;
        out.B12 = a.B20;
        out.B13 = a.B21;
        out.B14 = a.B22;
        out.B15 = a.B23;
        out.B16 = a.B24;
        out.B17 = a.B25;
        out.B18 = a.B26;
        out.B19 = a.B27;
        out.B20 = a.B28;
        out.B21 = a.B29;
        out.B22 = a.B30;
        out.B23 = a.B31;
        out.B24 = a.B0;
        out.B25 = a.B1;
        out.B26 = a.B2;
        out.B27 = a.B3;
        out.B28 = a.B4;
        out.B29 = a.B5;
        out.B30 = a.B6;
        out.B31 = a.B7;
        return out;
}
DR32Bits DR_RR9(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B9;
        out.B1 = a.B10;
        out.B2 = a.B11;
        out.B3 = a.B12;
        out.B4 = a.B13;
        out.B5 = a.B14;
        out.B6 = a.B15;
        out.B7 = a.B16;
        out.B8 = a.B17;
        out.B9 = a.B18;
        out.B10 = a.B19;
        out.B11 = a.B20;
        out.B12 = a.B21;
        out.B13 = a.B22;
        out.B14 = a.B23;
        out.B15 = a.B24;
        out.B16 = a.B25;
        out.B17 = a.B26;
        out.B18 = a.B27;
        out.B19 = a.B28;
        out.B20 = a.B29;
        out.B21 = a.B30;
        out.B22 = a.B31;
        out.B23 = a.B0;
        out.B24 = a.B1;
        out.B25 = a.B2;
        out.B26 = a.B3;
        out.B27 = a.B4;
        out.B28 = a.B5;
        out.B29 = a.B6;
        out.B30 = a.B7;
        out.B31 = a.B8;
        return out;
}
DR32Bits DR_RR11(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B11;
        out.B1 = a.B12;
        out.B2 = a.B13;
        out.B3 = a.B14;
        out.B4 = a.B15;
        out.B5 = a.B16;
        out.B6 = a.B17;
        out.B7 = a.B18;
        out.B8 = a.B19;
        out.B9 = a.B20;
        out.B10 = a.B21;
        out.B11 = a.B22;
        out.B12 = a.B23;
        out.B13 = a.B24;
        out.B14 = a.B25;
        out.B15 = a.B26;
        out.B16 = a.B27;
        out.B17 = a.B28;
        out.B18 = a.B29;
        out.B19 = a.B30;
        out.B20 = a.B31;
        out.B21 = a.B0;
        out.B22 = a.B1;
        out.B23 = a.B2;
        out.B24 = a.B3;
        out.B25 = a.B4;
        out.B26 = a.B5;
        out.B27 = a.B6;
        out.B28 = a.B7;
        out.B29 = a.B8;
        out.B30 = a.B9;
        out.B31 = a.B10;
        return out;
}
DR32Bits DR_RR13(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B13;
        out.B1 = a.B14;
        out.B2 = a.B15;
        out.B3 = a.B16;
        out.B4 = a.B17;
        out.B5 = a.B18;
        out.B6 = a.B19;
        out.B7 = a.B20;
        out.B8 = a.B21;
        out.B9 = a.B22;
        out.B10 = a.B23;
        out.B11 = a.B24;
        out.B12 = a.B25;
        out.B13 = a.B26;
        out.B14 = a.B27;
        out.B15 = a.B28;
        out.B16 = a.B29;
        out.B17 = a.B30;
        out.B18 = a.B31;
        out.B19 = a.B0;
        out.B20 = a.B1;
        out.B21 = a.B2;
        out.B22 = a.B3;
        out.B23 = a.B4;
        out.B24 = a.B5;
        out.B25 = a.B6;
        out.B26 = a.B7;
        out.B27 = a.B8;
        out.B28 = a.B9;
        out.B29 = a.B10;
        out.B30 = a.B11;
        out.B31 = a.B12;
        return out;
}
DR32Bits DR_RR17(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B17;
        out.B1 = a.B18;
        out.B2 = a.B19;
        out.B3 = a.B20;
        out.B4 = a.B21;
        out.B5 = a.B22;
        out.B6 = a.B23;
        out.B7 = a.B24;
        out.B8 = a.B25;
        out.B9 = a.B26;
        out.B10 = a.B27;
        out.B11 = a.B28;
        out.B12 = a.B29;
        out.B13 = a.B30;
        out.B14 = a.B31;
        out.B15 = a.B0;
        out.B16 = a.B1;
        out.B17 = a.B2;
        out.B18 = a.B3;
        out.B19 = a.B4;
        out.B20 = a.B5;
        out.B21 = a.B6;
        out.B22 = a.B7;
        out.B23 = a.B8;
        out.B24 = a.B9;
        out.B25 = a.B10;
        out.B26 = a.B11;
        out.B27 = a.B12;
        out.B28 = a.B13;
        out.B29 = a.B14;
        out.B30 = a.B15;
        out.B31 = a.B16;
        return out;
}
DR32Bits DR_RR18(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B18;
        out.B1 = a.B19;
        out.B2 = a.B20;
        out.B3 = a.B21;
        out.B4 = a.B22;
        out.B5 = a.B23;
        out.B6 = a.B24;
        out.B7 = a.B25;
        out.B8 = a.B26;
        out.B9 = a.B27;
        out.B10 = a.B28;
        out.B11 = a.B29;
        out.B12 = a.B30;
        out.B13 = a.B31;
        out.B14 = a.B0;
        out.B15 = a.B1;
        out.B16 = a.B2;
        out.B17 = a.B3;
        out.B18 = a.B4;
        out.B19 = a.B5;
        out.B20 = a.B6;
        out.B21 = a.B7;
        out.B22 = a.B8;
        out.B23 = a.B9;
        out.B24 = a.B10;
        out.B25 = a.B11;
        out.B26 = a.B12;
        out.B27 = a.B13;
        out.B28 = a.B14;
        out.B29 = a.B15;
        out.B30 = a.B16;
        out.B31 = a.B17;
        return out;
}
DR32Bits DR_RR19(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B19;
        out.B1 = a.B20;
        out.B2 = a.B21;
        out.B3 = a.B22;
        out.B4 = a.B23;
        out.B5 = a.B24;
        out.B6 = a.B25;
        out.B7 = a.B26;
        out.B8 = a.B27;
        out.B9 = a.B28;
        out.B10 = a.B29;
        out.B11 = a.B30;
        out.B12 = a.B31;
        out.B13 = a.B0;
        out.B14 = a.B1;
        out.B15 = a.B2;
        out.B16 = a.B3;
        out.B17 = a.B4;
        out.B18 = a.B5;
        out.B19 = a.B6;
        out.B20 = a.B7;
        out.B21 = a.B8;
        out.B22 = a.B9;
        out.B23 = a.B10;
        out.B24 = a.B11;
        out.B25 = a.B12;
        out.B26 = a.B13;
        out.B27 = a.B14;
        out.B28 = a.B15;
        out.B29 = a.B16;
        out.B30 = a.B17;
        out.B31 = a.B18;
        return out;
}
DR32Bits DR_RR22(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B22;
        out.B1 = a.B23;
        out.B2 = a.B24;
        out.B3 = a.B25;
        out.B4 = a.B26;
        out.B5 = a.B27;
        out.B6 = a.B28;
        out.B7 = a.B29;
        out.B8 = a.B30;
        out.B9 = a.B31;
        out.B10 = a.B0;
        out.B11 = a.B1;
        out.B12 = a.B2;
        out.B13 = a.B3;
        out.B14 = a.B4;
        out.B15 = a.B5;
        out.B16 = a.B6;
        out.B17 = a.B7;
        out.B18 = a.B8;
        out.B19 = a.B9;
        out.B20 = a.B10;
        out.B21 = a.B11;
        out.B22 = a.B12;
        out.B23 = a.B13;
        out.B24 = a.B14;
        out.B25 = a.B15;
        out.B26 = a.B16;
        out.B27 = a.B17;
        out.B28 = a.B18;
        out.B29 = a.B19;
        out.B30 = a.B20;
        out.B31 = a.B21;
        return out;
}
DR32Bits DR_RR25(DR32Bits a)
{
        DR32Bits out;
        out.B0 = a.B25;
        out.B1 = a.B26;
        out.B2 = a.B27;
        out.B3 = a.B28;
        out.B4 = a.B29;
        out.B5 = a.B30;
        out.B6 = a.B31;
        out.B7 = a.B0;
        out.B8 = a.B1;
        out.B9 = a.B2;
        out.B10 = a.B3;
        out.B11 = a.B4;
        out.B12 = a.B5;
        out.B13 = a.B6;
        out.B14 = a.B7;
        out.B15 = a.B8;
        out.B16 = a.B9;
        out.B17 = a.B10;
        out.B18 = a.B11;
        out.B19 = a.B12;
        out.B20 = a.B13;
        out.B21 = a.B14;
        out.B22 = a.B15;
        out.B23 = a.B16;
        out.B24 = a.B17;
        out.B25 = a.B18;
        out.B26 = a.B19;
        out.B27 = a.B20;
        out.B28 = a.B21;
        out.B29 = a.B22;
        out.B30 = a.B23;
        out.B31 = a.B24;
        return out;
}

DR32Bits DR_SR3(DR32Bits a)
{
    DR32Bits out;

    out.B0  = a.B3;
    out.B1  = a.B4;
    out.B2  = a.B5;
    out.B3  = a.B6;
    out.B4  = a.B7;
    out.B5  = a.B8;
    out.B6  = a.B9;
    out.B7  = a.B10;
    out.B8  = a.B11;
    out.B9  = a.B12;
    out.B10 = a.B13;
    out.B11 = a.B14;
    out.B12 = a.B15;
    out.B13 = a.B16;
    out.B14 = a.B17;
    out.B15 = a.B18;
    out.B16 = a.B19;
    out.B17 = a.B20;
    out.B18 = a.B21;
    out.B19 = a.B22;
    out.B20 = a.B23;
    out.B21 = a.B24;
    out.B22 = a.B25;
    out.B23 = a.B26;
    out.B24 = a.B27;
    out.B25 = a.B28;
    out.B26 = a.B29;
    out.B27 = a.B30;
    out.B28 = a.B31;

    DR newBit;
    newBit.set(0);

    out.B29 = newBit;
    out.B30 = newBit;
    out.B31 = newBit;

    return out;
}
DR32Bits DR_SR10(DR32Bits a)
{
    DR32Bits out;

    out.B0  = a.B10;
    out.B1  = a.B11;
    out.B2  = a.B12;
    out.B3  = a.B13;
    out.B4  = a.B14;
    out.B5  = a.B15;
    out.B6  = a.B16;
    out.B7  = a.B17;
    out.B8  = a.B18;
    out.B9  = a.B19;
    out.B10 = a.B20;
    out.B11 = a.B21;
    out.B12 = a.B22;
    out.B13 = a.B23;
    out.B14 = a.B24;
    out.B15 = a.B25;
    out.B16 = a.B26;
    out.B17 = a.B27;
    out.B18 = a.B28;
    out.B19 = a.B29;
    out.B20 = a.B30;
    out.B21 = a.B31;

    DR newBit;
    newBit.set(0);

    out.B22 = newBit;
    out.B23 = newBit;
    out.B24 = newBit;
    out.B25 = newBit;
    out.B26 = newBit;
    out.B27 = newBit;
    out.B28 = newBit;
    out.B29 = newBit;
    out.B30 = newBit;
    out.B31 = newBit;

    return out;
}

int getRoundLatestArrival(DR32Bits H[8])
{
    int out=0;

    for(int i=0;i<8;i++)
    {
        int t=getLatestArrival32B(H[i]);
        if(t > out) out = t;
        // std::cout << i << ": " << t << std::endl;
    }

    return out;

}
int getRoundLatestArrival(DR32Bits a, DR32Bits b, DR32Bits c, DR32Bits d, DR32Bits e, DR32Bits f, DR32Bits g, DR32Bits h)
{
    int out=0;

    out = std::max({getLatestArrival32B(a), getLatestArrival32B(b), getLatestArrival32B(c), getLatestArrival32B(d), getLatestArrival32B(e), getLatestArrival32B(f), getLatestArrival32B(g), getLatestArrival32B(h)});

    return out;

}

void fillRemainder(DR32Bits W[64], int t)
{
    DR cin; cin.set(0);
    DR32Bits s0 = DR_XOR3(DR_RR7(W[t-15]), DR_RR18(W[t-15]), DR_SR3(W[t-15]));
    DR32Bits s1 = DR_XOR3(DR_RR17(W[t-2]), DR_RR19(W[t-2]), DR_SR10(W[t-2]));
    W[t] = DR_KSA32(DR_KSA32(W[t-16], s0, cin).B, DR_KSA32(W[t-7], s1, cin).B, cin).B;
}

void compressionLoop(DR32Bits W, DR32Bits kDR, DR32Bits &a, DR32Bits &b, DR32Bits &c, DR32Bits &d, DR32Bits &e, DR32Bits &f, DR32Bits &g, DR32Bits &h)
{
    DR cin;
    cin.set(0);

    DR32Bits S1 = DR_XOR3(DR_RR6(e), DR_RR11(e), DR_RR25(e));
    DR32Bits ch = DR_XOR2(DR_AND(e, f), DR_AND(DR_NOT(e), g));
    DR32Bits temp1 = DR_KSA32(DR_KSA32(DR_KSA32(h, S1, cin).B, DR_KSA32(ch, kDR, cin).B, cin).B, W, cin).B;

    DR32Bits S0 = DR_XOR3(DR_RR2(a), DR_RR13(a), DR_RR22(a));
    DR32Bits maj = DR_XOR3(DR_AND(a, b), DR_AND(a, c), DR_AND(b, c));
    DR32Bits temp2 = DR_KSA32(S0, maj, cin).B;

    h = g;
    g = f;
    f = e;
    e = DR_KSA32(d, temp1, cin).B;
    d = c;
    c = b;
    b = a;
    a = DR_KSA32(temp1, temp2, cin).B;

}

void finalAdd(DR32Bits H[8], DR cin, DR32Bits a, DR32Bits b, DR32Bits c, DR32Bits d, DR32Bits e, DR32Bits f, DR32Bits g, DR32Bits h)
{
    H[0] = DR_KSA32(H[0], a, cin).B;
    H[1] = DR_KSA32(H[1], b, cin).B;
    H[2] = DR_KSA32(H[2], c, cin).B;
    H[3] = DR_KSA32(H[3], d, cin).B;
    H[4] = DR_KSA32(H[4], e, cin).B;
    H[5] = DR_KSA32(H[5], f, cin).B;
    H[6] = DR_KSA32(H[6], g, cin).B;
    H[7] = DR_KSA32(H[7], h, cin).B;
}

std::vector<uint8_t> DR_SHA256_Onecycle(std::vector<uint8_t> padded)
{

    DR32Bits H[8];
    uintToDR32(&H[0], 0x6a09e667);
    uintToDR32(&H[1], 0xbb67ae85);
    uintToDR32(&H[2], 0x3c6ef372);
    uintToDR32(&H[3], 0xa54ff53a);
    uintToDR32(&H[4], 0x510e527f);
    uintToDR32(&H[5], 0x9b05688c);
    uintToDR32(&H[6], 0x1f83d9ab);
    uintToDR32(&H[7], 0x5be0cd19);

    // Initial state
    // Done in 0 time
    DR32Bits W[64];
    for(int i=0 ; i<64 ; i++) uintToDR32(&W[i], 0);
    for(int i=0 ; i<16 ; i++) uintToDR32(&W[i], (padded[i * 4] << 24) | (padded[i * 4 + 1] << 16) | (padded[i * 4 + 2] << 8) | (padded[i * 4 + 3]));

    for(int i=16 ; i<64 ; i++) 
    {
        fillRemainder(W, i);
        // std::cout << "FillRemainder " << i << ": " << getLatestArrival32B(W[i]) << std::endl;
    }

    DR32Bits a = H[0];
    DR32Bits b = H[1];
    DR32Bits c = H[2];
    DR32Bits d = H[3];
    DR32Bits e = H[4];
    DR32Bits f = H[5];
    DR32Bits g = H[6];
    DR32Bits h = H[7];

    for(int i=0 ; i<64 ; i++) 
    {
        compressionLoop(W[i], kDRConsts[i], a, b, c, d, e, f, g, h);
        // std::cout << "Compression " << i << ": " << getRoundLatestArrival(a, b, c, d, e, f, g, h) << std::endl;
    }

    DR cin;
    cin.set(0);

    // H[0] = DR_KSA32(H[0], a, cin).B;
    // H[1] = DR_KSA32(H[1], b, cin).B;
    // H[2] = DR_KSA32(H[2], c, cin).B;
    // H[3] = DR_KSA32(H[3], d, cin).B;
    // H[4] = DR_KSA32(H[4], e, cin).B;
    // H[5] = DR_KSA32(H[5], f, cin).B;
    // H[6] = DR_KSA32(H[6], g, cin).B;
    // H[7] = DR_KSA32(H[7], h, cin).B;

    finalAdd(H, cin, a, b, c, d, e, f, g, h);

    std::cout << getRoundLatestArrival(H) << std::endl;

    // Convert final hash to bytes
    std::vector<uint8_t> digest;

    for (int i = 0; i < 8; ++i)
    {
        digest.push_back((DR32ToUint(H[i]) >> 24) & 0xFF);
        digest.push_back((DR32ToUint(H[i]) >> 16) & 0xFF);
        digest.push_back((DR32ToUint(H[i]) >> 8) & 0xFF);
        digest.push_back(DR32ToUint(H[i]) & 0xFF);
    }

    return digest;

}

enum cellState {EMPTY, BUSY, DONE, START};
class cell
{
    public:
        bool ack, sending, receiving;
        cellState state;
        DR32Bits W[64];
        DR32Bits H[8];
        DR32Bits a, b, c, d, e, f, g, h;
        int endCount;
        cell()
        {
            state = EMPTY;
            ack = 0;
            sending = 0;
            receiving = 0;
        }
        void moveData(cell &old)
        {
            for(int i=0 ; i<64 ; i++)
                W[i].set(old.W[i]);
            for(int i=0 ; i<8 ; i++)
                H[i].set(old.H[i]);
            a = old.a;
            b = old.b;
            c = old.c;
            d = old.d;
            e = old.e;
            f = old.f;
            g = old.g;
            h = old.h;
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

std::vector<std::vector<uint8_t>> DR_SHA256_Pipelined(std::vector<std::vector<uint8_t>> &paddeds)
{
    // std::ofstream file("shaDUALRAIL.txt");
    // std::ofstream exitTimes("shaDUALRAIL_Exits.txt");
    // std::ofstream enterTimes("shaDUALRAIL_Enters.txt");

    int endingTimes[vectorLength] = {0};
    std::vector<std::vector<uint8_t>> finalOuts;
    // 48 cells of fill remainder
    // 64 cells of compression
    // 1 cell of final H addition
    std::vector<cell> c(113);
    std::vector<int> ack_next(113, 0);
    std::vector<int> sending_next(113, 0);
    std::vector<int> receiving_next(113, 0);

    int gateCount = 0;

    DR32Bits H[8];
    uintToDR32(&H[0], 0x6a09e667);
    uintToDR32(&H[1], 0xbb67ae85);
    uintToDR32(&H[2], 0x3c6ef372);
    uintToDR32(&H[3], 0xa54ff53a);
    uintToDR32(&H[4], 0x510e527f);
    uintToDR32(&H[5], 0x9b05688c);
    uintToDR32(&H[6], 0x1f83d9ab);
    uintToDR32(&H[7], 0x5be0cd19);

    DR cin;
    cin.set(0);

    int paddedsInCounter = 0;
    int paddedsOutCounter = 0;

    // std::cout << "Preloop\n";

do
    {

        // for(int i=0;i<112;i++)
        // {
        //     std::cout << c[i].state << " | ";
        // }
        // std::cout << std::endl;

        // If the cell has finished, set it to done
        for(int i=112 ; i>=0 ; i--)
        {
            if((c[i].endCount <= gateCount) && (c[i].state == BUSY))
            {
                c[i].state = DONE;
            }
            if((i==112) && (c[i].state == DONE))
            {

                c[i].state = EMPTY;

                std::vector<uint8_t> digest;

                for (int j = 0; j < 8; ++j)
                {
                    digest.push_back((DR32ToUint(c[i].H[j]) >> 24) & 0xFF);
                    digest.push_back((DR32ToUint(c[i].H[j]) >> 16) & 0xFF);
                    digest.push_back((DR32ToUint(c[i].H[j]) >> 8) & 0xFF);
                    digest.push_back(DR32ToUint(c[i].H[j]) & 0xFF);
                }

                finalOuts.push_back(digest);
                endingTimes[paddedsOutCounter] = getRoundLatestArrival(c[i].H);
                std::string myHash = toHex(digest);
                std::cout << "Entry " << paddedsOutCounter << " exit time :\t" << endingTimes[paddedsOutCounter] << "\t" << myHash << std::endl;
                // file << "Entry " << paddedsOutCounter << " exit time :\t" << endingTimes[paddedsOutCounter] << "\t" << myHash << std::endl;
                // exitTimes << paddedsOutCounter << " : " << endingTimes[paddedsOutCounter] << std::endl;


                paddedsOutCounter++;
            }
        }

        // Do the work
        for(int i=112 ; i>=0 ; i--)
        {
            if(c[i].state == START)
            {
                c[i].state = BUSY;

                if(i==112)
                {
                    finalAdd(c[i].H, cin, c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                    c[i].endCount = getRoundLatestArrival(c[i].H);
                }
                if(i <= 111 && i >= 48)
                {
                    // int pre;
                    // // if(i==100) pre = getRoundLatestArrival(c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                    compressionLoop(c[i].W[i-48], kDRConsts[i-48], c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                    c[i].endCount = getRoundLatestArrival(c[i].a, c[i].b, c[i].c, c[i].d, c[i].e, c[i].f, c[i].g, c[i].h);
                    // if(i==100)
                    // {
                    //     std::cout << "Duration : " << c[i].endCount - pre << " | GC : " << gateCount  << " | Comp time : " << c[i].endCount << std::endl;
                    // }
                }
                if(i <= 47 && i >=0)
                {
                    fillRemainder(c[i].W, i+16);
                    c[i].endCount = getLatestArrival32B(c[i].W[i+16]);
                }
            }
        }

        // Transfer of data
        // Only cells that are empty can accept data from cells that are full
        // The accepting cell is now full
        // The accepted cell is now empty
        // The accepting cell now begins the calculation
        for(int i=112 ; i>0 ; i--)
        {
            if((c[i-1].state == DONE) && (c[i].state == EMPTY))
            {
                c[i-1].state = EMPTY;
                c[i].state = START;
                c[i].moveData(c[i-1]);
                c[i].setGateCount(gateCount);
            }
        }
        if((c[0].state == EMPTY) && paddedsInCounter < vectorLength)
        {
            // Initial state
            // Done in 0 time
            DR32Bits W[64];
            for(int i=0 ; i<64 ; i++) uintToDR32(&W[i], 0);
            for(int i=0 ; i<16 ; i++) uintToDR32(&W[i], (paddeds[paddedsInCounter][i * 4] << 24) | (paddeds[paddedsInCounter][i * 4 + 1] << 16) | (paddeds[paddedsInCounter][i * 4 + 2] << 8) | (paddeds[paddedsInCounter][i * 4 + 3]));

            for(int i=0 ; i<64 ; i++)
                c[0].W[i].set(W[i]);

            for(int i=0 ; i<8 ; i++)
                c[0].H[i].set(H[i]);

            c[0].setGateCount(gateCount);

            c[0].state = START;

            c[0].a = H[0];
            c[0].b = H[1];
            c[0].c = H[2];
            c[0].d = H[3];
            c[0].e = H[4];
            c[0].f = H[5];
            c[0].g = H[6];
            c[0].h = H[7];

            // enterTimes << paddedsInCounter << " : " << gateCount << std::endl;

            paddedsInCounter++;
        }

        // if(gateCount%1==0)
        // {
        //     std::cout << gateCount << std::endl;
        //     for(int i=0;i<112;i++)
        //         {
        //             if(i==112)              std::cout << "Final : " << c[i].state << " | EC : " << c[i].endCount << "\t";
        //             if(i <= 111 && i >= 48) std::cout << "Compr : " << c[i].state << " | EC : " << c[i].endCount << "\t";
        //             if(i <= 47 && i >=0)    std::cout << "Fills : " << c[i].state << " | EC : " << c[i].endCount << "\t";
                    
        //             if(i%9==8) std::cout<<std::endl;
        //         }

        //     system("pause");
        // }

        gateCount++;
    }
    while(paddedsOutCounter != vectorLength);    

    // for(int i=0;i<vectorLength;i++)
    // {
    //     std::cout << "Entry " << i << " exit time :\t" << endingTimes[i] << std::endl;
    // }

    // file.close();
    // exitTimes.close();
    // enterTimes.close();

    return finalOuts;

}

int main()
{
     
    // Init constants DR style
    for(int i=0 ; i<64 ; i++) uintToDR32(&kDRConsts[i], k[i]);

    std::vector<std::vector<uint8_t>> datas(vectorLength);
    for(int i=0;i<vectorLength;i++) datas[i] = std::vector<uint8_t>(inputs[i].begin(), inputs[i].end());

    std::vector<std::vector<uint8_t>> paddeds(vectorLength);
    for(int i=0;i<vectorLength;i++) paddeds[i] = padInput(datas[i]);

    std::vector<std::vector<uint8_t>> hashes = DR_SHA256_Pipelined(paddeds);

    // findDRKSA32Delay();

}