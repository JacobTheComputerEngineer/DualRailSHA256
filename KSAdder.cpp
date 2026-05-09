#include "basicGates.cpp"

#pragma once

class KSA4_out
{
    public:
        bit4 B;
        bit Cout;
        int t;
};
class KSA32_out
{
    public:
        bit32 B;
        bit Cout;
        int t;
};

bit4* divide32Into4(bit32 a)
{
    bit4 *out = new bit4[8];

    for(int i=0;i<32;i++)
    {
        out[i/4].b[i%4] = a.b[i];
    }

    return out;
}

KSA4_out KSA4(bit4 a, bit4 b, bit c)
{
    KSA4_out out;

    bit BUF1_1 = BUF(c);      
    bit BUF1_2 = BUF(BUF1_1); 
    bit BUF1_3 = BUF(BUF1_2); 
    
    bitGP GP1 = GP(a.b[0], b.b[0]);
    bitGP GP2 = GP(a.b[1], b.b[1]);
    bitGP GP3 = GP(a.b[2], b.b[2]);
    bitGP GP4 = GP(a.b[3], b.b[3]);
    
    bitGP C_1 = CARRY(GP1.g, GP2.g, GP1.p, GP2.p);
    bitGP C_2 = CARRY(GP2.g, GP3.g, GP2.p, GP3.p);
    bitGP C_3 = CARRY(GP3.g, GP4.g, GP3.p, GP4.p);
    bitGP C_4 = CARRY(C_1.g, C_3.g, C_1.p, C_3.p);

    bit GREY_1 = GREY(GP1.g, GP1.p, BUF1_1);   
    bit GREY_2 = GREY(C_1.g, C_1.p, BUF1_2);   
    bit GREY_3 = GREY(C_2.g, C_2.p, GREY_1);   

    bit S0 = SUM(GP1.p, BUF1_3);   
    bit S1 = SUM(GP2.p, GREY_1);   
    bit S2 = SUM(GP3.p, GREY_2);   
    bit S3 = SUM(GP4.p, GREY_3);   

    bit Cout = GREY(C_4.g, C_4.p, BUF1_3); 
    
    out.B.b[0] = S0;
    out.B.b[1] = S1;
    out.B.b[2] = S2;
    out.B.b[3] = S3;
    out.Cout = Cout;

    out.t = out.Cout.t;
    for(int i=0;i<4;i++) if(out.B.b[i].t > out.t) out.t = out.B.b[i].t;

    return out;
}

// By hand, critical path is 8 KSA4
KSA32_out KSA32(bit32 a, bit32 b, bit c)
{
    KSA32_out out;

    bit4 *aIn4 = divide32Into4(a);
    bit4 *bIn4 = divide32Into4(b);

    KSA4_out adds[8];

    adds[0] = KSA4(aIn4[0], bIn4[0], c);    
    adds[1] = KSA4(aIn4[1], bIn4[1], adds[0].Cout);    
    adds[2] = KSA4(aIn4[2], bIn4[2], adds[1].Cout);    
    adds[3] = KSA4(aIn4[3], bIn4[3], adds[2].Cout);    
    adds[4] = KSA4(aIn4[4], bIn4[4], adds[3].Cout);    
    adds[5] = KSA4(aIn4[5], bIn4[5], adds[4].Cout);    
    adds[6] = KSA4(aIn4[6], bIn4[6], adds[5].Cout);    
    adds[7] = KSA4(aIn4[7], bIn4[7], adds[6].Cout);    

    delete[] aIn4;
    delete[] bIn4;

    for(int i=0;i<32;i++)
    {
        out.B.b[i] = adds[i/4].B.b[i%4];
    }

    out.Cout = adds[7].Cout;

    out.t = out.Cout.t;
    for(int i=0;i<32;i++) if(out.B.b[i].t > out.t) out.t = out.B.b[i].t;

    return out;
}

void printBit(bit a)
{
    printf("%d\n", a.t);
}
void printBits(bit4 a)
{
    for(int i=0;i<4;i++) printf("%d", a.b[i].v);
    printf("\n");
}
void printBitss(bit32 a)
{
    for(int i=0;i<32;i++) printf("%d", a.b[i].v);
    printf("\n");
}
void printBitssTime(bit32 a)
{
    for(int i=0;i<32;i++) printf("T %d: %d", i, a.b[i].t);
}

void set4Bits(bit4 *a, unsigned int n)
{
    for(int i=0;i<4;i++) a->b[i].v = ((n >> i) & 1);
}
void uintTo32(bit32 *a, unsigned int n)
{
    for(int i=0;i<32;i++) a->b[i].v = ((n >> i) & 1);
}
unsigned int bits32ToUint(bit32 a)
{
    unsigned int out = 0;

    for(int i=0;i<32;i++) out |= (a.b[i].v & 1) << i;

    return out;
}

// Easy find maximum delay based on defines in basicGates.cpp
#define KSA32DELAY 44
int findKSA32Delay()
{
    bit32 a, b;
    bit c;
    KSA32_out out = KSA32(a, b, c);

    uintTo32(&a, 4294967295);
    uintTo32(&b, 4294967295);
    c.v = 1;

    out = KSA32(a, b, c);

    return out.t;
}