#include "basicGatesDR.cpp"

#pragma once

class KSA4DR_out
{
    public:
        DR4Bits B;
        DR Cout;
        void setWaiting()
        {
            B.setWaiting();
            Cout.setWaiting();
        }
        void setInvalid()
        {
            B.setInvalid();
            Cout.setInvalid();
        }

};
class KSA32DR_out
{
    public:
        DR32Bits B;
        DR Cout;
        // int TreadyAt;
        // int FreadyAt;
        
        void setWaiting()
        {
            B.setWaiting();
            Cout.setWaiting();
        }
        void setInvalid()
        {
            B.setInvalid();
            Cout.setInvalid();
        }
};

int KSATReadyAt(KSA4DR_out a)
{
    int out = 0;
    if(a.B.B0.tT != INF) if(a.B.B0.tT > out) out = a.B.B0.tT;
    if(a.B.B1.tT != INF) if(a.B.B1.tT > out) out = a.B.B1.tT;
    if(a.B.B2.tT != INF) if(a.B.B2.tT > out) out = a.B.B2.tT;
    if(a.B.B3.tT != INF) if(a.B.B3.tT > out) out = a.B.B3.tT;
    if(a.Cout.tT != INF) if(a.Cout.tT > out) out = a.Cout.tT;

    return out;
}
int KSAFReadyAt(KSA4DR_out a)
{
    int out = 0;
    if(a.B.B0.tF != INF) if(a.B.B0.tF > out) out = a.B.B0.tF;
    if(a.B.B1.tF != INF) if(a.B.B1.tF > out) out = a.B.B1.tF;
    if(a.B.B2.tF != INF) if(a.B.B2.tF > out) out = a.B.B2.tF;
    if(a.B.B3.tF != INF) if(a.B.B3.tF > out) out = a.B.B3.tF;
    if(a.Cout.tF != INF) if(a.Cout.tF > out) out = a.Cout.tF;

    return out;
}

int KSATReadyAt(KSA32DR_out a)
{
    int out = 0;
    if(a.B.B0.tT != INF) if(a.B.B0.tT > out) out = a.B.B0.tT;
    if(a.B.B1.tT != INF) if(a.B.B1.tT > out) out = a.B.B1.tT;
    if(a.B.B2.tT != INF) if(a.B.B2.tT > out) out = a.B.B2.tT;
    if(a.B.B3.tT != INF) if(a.B.B3.tT > out) out = a.B.B3.tT;
    if(a.B.B4.tT != INF) if(a.B.B4.tT > out) out = a.B.B4.tT;
    if(a.B.B5.tT != INF) if(a.B.B5.tT > out) out = a.B.B5.tT;
    if(a.B.B6.tT != INF) if(a.B.B6.tT > out) out = a.B.B6.tT;
    if(a.B.B7.tT != INF) if(a.B.B7.tT > out) out = a.B.B7.tT;
    if(a.B.B8.tT != INF) if(a.B.B8.tT > out) out = a.B.B8.tT;
    if(a.B.B9.tT != INF) if(a.B.B9.tT > out) out = a.B.B9.tT;
    if(a.B.B10.tT != INF) if(a.B.B10.tT > out) out = a.B.B10.tT;
    if(a.B.B11.tT != INF) if(a.B.B11.tT > out) out = a.B.B11.tT;
    if(a.B.B12.tT != INF) if(a.B.B12.tT > out) out = a.B.B12.tT;
    if(a.B.B13.tT != INF) if(a.B.B13.tT > out) out = a.B.B13.tT;
    if(a.B.B14.tT != INF) if(a.B.B14.tT > out) out = a.B.B14.tT;
    if(a.B.B15.tT != INF) if(a.B.B15.tT > out) out = a.B.B15.tT;
    if(a.B.B16.tT != INF) if(a.B.B16.tT > out) out = a.B.B16.tT;
    if(a.B.B17.tT != INF) if(a.B.B17.tT > out) out = a.B.B17.tT;
    if(a.B.B18.tT != INF) if(a.B.B18.tT > out) out = a.B.B18.tT;
    if(a.B.B19.tT != INF) if(a.B.B19.tT > out) out = a.B.B19.tT;
    if(a.B.B20.tT != INF) if(a.B.B20.tT > out) out = a.B.B20.tT;
    if(a.B.B21.tT != INF) if(a.B.B21.tT > out) out = a.B.B21.tT;
    if(a.B.B22.tT != INF) if(a.B.B22.tT > out) out = a.B.B22.tT;
    if(a.B.B23.tT != INF) if(a.B.B23.tT > out) out = a.B.B23.tT;
    if(a.B.B24.tT != INF) if(a.B.B24.tT > out) out = a.B.B24.tT;
    if(a.B.B25.tT != INF) if(a.B.B25.tT > out) out = a.B.B25.tT;
    if(a.B.B26.tT != INF) if(a.B.B26.tT > out) out = a.B.B26.tT;
    if(a.B.B27.tT != INF) if(a.B.B27.tT > out) out = a.B.B27.tT;
    if(a.B.B28.tT != INF) if(a.B.B28.tT > out) out = a.B.B28.tT;
    if(a.B.B29.tT != INF) if(a.B.B29.tT > out) out = a.B.B29.tT;
    if(a.B.B30.tT != INF) if(a.B.B30.tT > out) out = a.B.B30.tT;
    if(a.B.B31.tT != INF) if(a.B.B31.tT > out) out = a.B.B31.tT;
    if(a.Cout.tT != INF) if(a.Cout.tT > out) out = a.Cout.tT;

    return out;
}
int KSAFReadyAt(KSA32DR_out a)
{
    int out = 0;
    if(a.B.B0.tF != INF) if(a.B.B0.tF > out) out = a.B.B0.tF;
    if(a.B.B1.tF != INF) if(a.B.B1.tF > out) out = a.B.B1.tF;
    if(a.B.B2.tF != INF) if(a.B.B2.tF > out) out = a.B.B2.tF;
    if(a.B.B3.tF != INF) if(a.B.B3.tF > out) out = a.B.B3.tF;
    if(a.B.B4.tF != INF) if(a.B.B4.tF > out) out = a.B.B4.tF;
    if(a.B.B5.tF != INF) if(a.B.B5.tF > out) out = a.B.B5.tF;
    if(a.B.B6.tF != INF) if(a.B.B6.tF > out) out = a.B.B6.tF;
    if(a.B.B7.tF != INF) if(a.B.B7.tF > out) out = a.B.B7.tF;
    if(a.B.B8.tF != INF) if(a.B.B8.tF > out) out = a.B.B8.tF;
    if(a.B.B9.tF != INF) if(a.B.B9.tF > out) out = a.B.B9.tF;
    if(a.B.B10.tF != INF) if(a.B.B10.tF > out) out = a.B.B10.tF;
    if(a.B.B11.tF != INF) if(a.B.B11.tF > out) out = a.B.B11.tF;
    if(a.B.B12.tF != INF) if(a.B.B12.tF > out) out = a.B.B12.tF;
    if(a.B.B13.tF != INF) if(a.B.B13.tF > out) out = a.B.B13.tF;
    if(a.B.B14.tF != INF) if(a.B.B14.tF > out) out = a.B.B14.tF;
    if(a.B.B15.tF != INF) if(a.B.B15.tF > out) out = a.B.B15.tF;
    if(a.B.B16.tF != INF) if(a.B.B16.tF > out) out = a.B.B16.tF;
    if(a.B.B17.tF != INF) if(a.B.B17.tF > out) out = a.B.B17.tF;
    if(a.B.B18.tF != INF) if(a.B.B18.tF > out) out = a.B.B18.tF;
    if(a.B.B19.tF != INF) if(a.B.B19.tF > out) out = a.B.B19.tF;
    if(a.B.B20.tF != INF) if(a.B.B20.tF > out) out = a.B.B20.tF;
    if(a.B.B21.tF != INF) if(a.B.B21.tF > out) out = a.B.B21.tF;
    if(a.B.B22.tF != INF) if(a.B.B22.tF > out) out = a.B.B22.tF;
    if(a.B.B23.tF != INF) if(a.B.B23.tF > out) out = a.B.B23.tF;
    if(a.B.B24.tF != INF) if(a.B.B24.tF > out) out = a.B.B24.tF;
    if(a.B.B25.tF != INF) if(a.B.B25.tF > out) out = a.B.B25.tF;
    if(a.B.B26.tF != INF) if(a.B.B26.tF > out) out = a.B.B26.tF;
    if(a.B.B27.tF != INF) if(a.B.B27.tF > out) out = a.B.B27.tF;
    if(a.B.B28.tF != INF) if(a.B.B28.tF > out) out = a.B.B28.tF;
    if(a.B.B29.tF != INF) if(a.B.B29.tF > out) out = a.B.B29.tF;
    if(a.B.B30.tF != INF) if(a.B.B30.tF > out) out = a.B.B30.tF;
    if(a.B.B31.tF != INF) if(a.B.B31.tF > out) out = a.B.B31.tF;
    if(a.Cout.tF != INF) if(a.Cout.tF > out) out = a.Cout.tF;

    return out;
}

DR4Bits* divide32Into4DR(DR32Bits a)
{
    DR4Bits *out = new DR4Bits[8];
    
    out[0].B0 = a.B0;
    out[0].B1 = a.B1;
    out[0].B2 = a.B2;
    out[0].B3 = a.B3;
    out[1].B0 = a.B4;
    out[1].B1 = a.B5;
    out[1].B2 = a.B6;
    out[1].B3 = a.B7;
    out[2].B0 = a.B8;
    out[2].B1 = a.B9;
    out[2].B2 = a.B10;
    out[2].B3 = a.B11;
    out[3].B0 = a.B12;
    out[3].B1 = a.B13;
    out[3].B2 = a.B14;
    out[3].B3 = a.B15;
    out[4].B0 = a.B16;
    out[4].B1 = a.B17;
    out[4].B2 = a.B18;
    out[4].B3 = a.B19;
    out[5].B0 = a.B20;
    out[5].B1 = a.B21;
    out[5].B2 = a.B22;
    out[5].B3 = a.B23;
    out[6].B0 = a.B24;
    out[6].B1 = a.B25;
    out[6].B2 = a.B26;
    out[6].B3 = a.B27;
    out[7].B0 = a.B28;
    out[7].B1 = a.B29;
    out[7].B2 = a.B30;
    out[7].B3 = a.B31;

    return out;
}

KSA4DR_out DR_KSA4(DR4Bits a, DR4Bits b, DR c)
{
    KSA4DR_out out;

    if(a.waiting() || b.waiting() || c.waiting())
    {
        out.setWaiting();
        return out;
    }
    if(a.illegal() || b.illegal() || c.illegal())
    {
        out.setInvalid();
        return out;
    }


    DR BUF1_1 = DR_BUF(c);
    DR BUF1_2 = DR_BUF(BUF1_1);
    DR BUF1_3 = DR_BUF(BUF1_2);

    DR_GP_out GP1 = DR_GP(a.B0, b.B0);
    DR_GP_out GP2 = DR_GP(a.B1, b.B1);
    DR_GP_out GP3 = DR_GP(a.B2, b.B2);
    DR_GP_out GP4 = DR_GP(a.B3, b.B3);

    DR_GP_out C_1 = DR_CARRY(GP1.G, GP2.G, GP1.P, GP2.P);
    DR_GP_out C_2 = DR_CARRY(GP2.G, GP3.G, GP2.P, GP3.P);
    DR_GP_out C_3 = DR_CARRY(GP3.G, GP4.G, GP3.P, GP4.P);
    DR_GP_out C_4 = DR_CARRY(C_1.G, C_3.G, C_1.P, C_3.P);

    DR GREY_1 = DR_GREY(GP1.G, GP1.P, BUF1_1);
    DR GREY_2 = DR_GREY(C_1.G, C_1.P, BUF1_2);
    DR GREY_3 = DR_GREY(C_2.G, C_2.P, GREY_1);

    DR S0 = DR_SUM(GP1.P, BUF1_3);
    DR S1 = DR_SUM(GP2.P, GREY_1);
    DR S2 = DR_SUM(GP3.P, GREY_2);
    DR S3 = DR_SUM(GP4.P, GREY_3);

    DR Cout = DR_GREY(C_4.G, C_4.P, BUF1_3);
    
    out.B.B0 = S0;
    out.B.B1 = S1;
    out.B.B2 = S2;
    out.B.B3 = S3;
    out.Cout = Cout;

    // std::cout << 
    // "BUF1_1 : " << BUF1_1.tT << " " << BUF1_1.tF << std::endl << 
    // "BUF1_2 : " << BUF1_2.tT << " " << BUF1_2.tF << std::endl << 
    // "BUF1_3 : " << BUF1_3.tT << " " << BUF1_3.tF << std::endl << 
    // "GP1G : " << GP1.G.tT << " " << GP1.G.tF << " | GP1P : " << GP1.P.tT << " " << GP1.P.tF <<std::endl << 
    // "GP2G : " << GP2.G.tT << " " << GP2.G.tF << " | GP2P : " << GP2.P.tT << " " << GP2.P.tF <<std::endl << 
    // "GP3G : " << GP3.G.tT << " " << GP3.G.tF << " | GP3P : " << GP3.P.tT << " " << GP3.P.tF <<std::endl << 
    // "GP4G : " << GP4.G.tT << " " << GP4.G.tF << " | GP4P : " << GP4.P.tT << " " << GP4.P.tF <<std::endl << 
    // "C_1G : " << C_1.G.tT << " " << C_1.G.tF << " | C_1P : " << C_1.P.tT << " " << C_1.P.tF <<std::endl << 
    // "C_2G : " << C_2.G.tT << " " << C_2.G.tF << " | C_2P : " << C_2.P.tT << " " << C_2.P.tF <<std::endl << 
    // "C_3G : " << C_3.G.tT << " " << C_3.G.tF << " | C_3P : " << C_3.P.tT << " " << C_3.P.tF <<std::endl << 
    // "C_4G : " << C_4.G.tT << " " << C_4.G.tF << " | C_4P : " << C_4.P.tT << " " << C_4.P.tF <<std::endl << 
    // "GREY_1 : " << GREY_1.tT << " " << GREY_1.tF << std::endl << 
    // "GREY_2 : " << GREY_2.tT << " " << GREY_2.tF << std::endl << 
    // "GREY_3 : " << GREY_3.tT << " " << GREY_3.tF << std::endl << 
    // "S0 : " << S0.tT << " " << S0.tF << std::endl << 
    // "S1 : " << S1.tT << " " << S1.tF << std::endl << 
    // "S2 : " << S2.tT << " " << S2.tF << std::endl << 
    // "S3 : " << S3.tT << " " << S3.tF << std::endl << 
    // "Cout : " << Cout.tT << " " << Cout.tF << std::endl;

    return out;
}
KSA32DR_out DR_KSA32(DR32Bits a, DR32Bits b, DR c)
{
    KSA32DR_out out;

    if(a.waiting() || b.waiting() || c.waiting())
    {
        out.setWaiting();
        return out;
    }
    if(a.illegal() || b.illegal() || c.illegal())
    {
        out.setInvalid();
        return out;
    }

    DR4Bits *aIn4 = divide32Into4DR(a);
    DR4Bits *bIn4 = divide32Into4DR(b);

    KSA4DR_out add0 = DR_KSA4(aIn4[0], bIn4[0], c);    
    KSA4DR_out add1 = DR_KSA4(aIn4[1], bIn4[1], add0.Cout);    
    KSA4DR_out add2 = DR_KSA4(aIn4[2], bIn4[2], add1.Cout);    
    KSA4DR_out add3 = DR_KSA4(aIn4[3], bIn4[3], add2.Cout);    
    KSA4DR_out add4 = DR_KSA4(aIn4[4], bIn4[4], add3.Cout);    
    KSA4DR_out add5 = DR_KSA4(aIn4[5], bIn4[5], add4.Cout);    
    KSA4DR_out add6 = DR_KSA4(aIn4[6], bIn4[6], add5.Cout);    
    KSA4DR_out add7 = DR_KSA4(aIn4[7], bIn4[7], add6.Cout);    

    // std::cout << add0.Cout.tF << std::endl;
    // std::cout << add1.Cout.tF << std::endl;
    // std::cout << add2.Cout.tF << std::endl;
    // std::cout << add3.Cout.tF << std::endl;
    // std::cout << add4.Cout.tF << std::endl;
    // std::cout << add5.Cout.tF << std::endl;
    // std::cout << add6.Cout.tF << std::endl;
    // std::cout << add7.Cout.tF << std::endl;

    delete[] aIn4;
    delete[] bIn4;

    out.B.B0 = add0.B.B0;
    out.B.B1 = add0.B.B1;
    out.B.B2 = add0.B.B2;
    out.B.B3 = add0.B.B3;
    out.B.B4 = add1.B.B0;
    out.B.B5 = add1.B.B1;
    out.B.B6 = add1.B.B2;
    out.B.B7 = add1.B.B3;
    out.B.B8 = add2.B.B0;
    out.B.B9 = add2.B.B1;
    out.B.B10 = add2.B.B2;
    out.B.B11 = add2.B.B3;
    out.B.B12 = add3.B.B0;
    out.B.B13 = add3.B.B1;
    out.B.B14 = add3.B.B2;
    out.B.B15 = add3.B.B3;
    out.B.B16 = add4.B.B0;
    out.B.B17 = add4.B.B1;
    out.B.B18 = add4.B.B2;
    out.B.B19 = add4.B.B3;
    out.B.B20 = add5.B.B0;
    out.B.B21 = add5.B.B1;
    out.B.B22 = add5.B.B2;
    out.B.B23 = add5.B.B3;
    out.B.B24 = add6.B.B0;
    out.B.B25 = add6.B.B1;
    out.B.B26 = add6.B.B2;
    out.B.B27 = add6.B.B3;
    out.B.B28 = add7.B.B0;
    out.B.B29 = add7.B.B1;
    out.B.B30 = add7.B.B2;
    out.B.B31 = add7.B.B3;

    out.Cout = add7.Cout;

    return out;
}

void printBit(DR a)
{
    printf("F: %d\nT: %d\n", a.F, a.T);
}
void printBits(DR4Bits a)
{
    printf("F: %d%d%d%d\n", a.B3.F, a.B2.F, a.B1.F, a.B0.F);
    printf("T: %d%d%d%d\n", a.B3.T, a.B2.T, a.B1.T, a.B0.T);
}
void printBitss(DR32Bits a)
{
    printf("F: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", a.B31.F, a.B30.F, a.B29.F, a.B28.F, a.B27.F, a.B26.F, a.B25.F, a.B24.F, a.B23.F, a.B22.F, a.B21.F, a.B20.F, a.B19.F, a.B18.F, a.B17.F, a.B16.F, a.B15.F, a.B14.F, a.B13.F, a.B12.F, a.B11.F, a.B10.F, a.B9.F, a.B8.F, a.B7.F, a.B6.F, a.B5.F, a.B4.F, a.B3.F, a.B2.F, a.B1.F, a.B0.F);
    printf("T: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", a.B31.T, a.B30.T, a.B29.T, a.B28.T, a.B27.T, a.B26.T, a.B25.T, a.B24.T, a.B23.T, a.B22.T, a.B21.T, a.B20.T, a.B19.T, a.B18.T, a.B17.T, a.B16.T, a.B15.T, a.B14.T, a.B13.T, a.B12.T, a.B11.T, a.B10.T, a.B9.T, a.B8.T, a.B7.T, a.B6.T, a.B5.T, a.B4.T, a.B3.T, a.B2.T, a.B1.T, a.B0.T);
}
void printBitssTime(DR32Bits a)
{
    std::cout << a.B0.tT << " " << a.B0.tF << std::endl;
    std::cout << a.B1.tT << " " << a.B1.tF << std::endl;
    std::cout << a.B2.tT << " " << a.B2.tF << std::endl;
    std::cout << a.B3.tT << " " << a.B3.tF << std::endl;
    std::cout << a.B4.tT << " " << a.B4.tF << std::endl;
    std::cout << a.B5.tT << " " << a.B5.tF << std::endl;
    std::cout << a.B6.tT << " " << a.B6.tF << std::endl;
    std::cout << a.B7.tT << " " << a.B7.tF << std::endl;
    std::cout << a.B8.tT << " " << a.B8.tF << std::endl;
    std::cout << a.B9.tT << " " << a.B9.tF << std::endl;
    std::cout << a.B10.tT << " " << a.B10.tF << std::endl;
    std::cout << a.B11.tT << " " << a.B11.tF << std::endl;
    std::cout << a.B12.tT << " " << a.B12.tF << std::endl;
    std::cout << a.B13.tT << " " << a.B13.tF << std::endl;
    std::cout << a.B14.tT << " " << a.B14.tF << std::endl;
    std::cout << a.B15.tT << " " << a.B15.tF << std::endl;
    std::cout << a.B16.tT << " " << a.B16.tF << std::endl;
    std::cout << a.B17.tT << " " << a.B17.tF << std::endl;
    std::cout << a.B18.tT << " " << a.B18.tF << std::endl;
    std::cout << a.B19.tT << " " << a.B19.tF << std::endl;
    std::cout << a.B20.tT << " " << a.B20.tF << std::endl;
    std::cout << a.B21.tT << " " << a.B21.tF << std::endl;
    std::cout << a.B22.tT << " " << a.B22.tF << std::endl;
    std::cout << a.B23.tT << " " << a.B23.tF << std::endl;
    std::cout << a.B24.tT << " " << a.B24.tF << std::endl;
    std::cout << a.B25.tT << " " << a.B25.tF << std::endl;
    std::cout << a.B26.tT << " " << a.B26.tF << std::endl;
    std::cout << a.B27.tT << " " << a.B27.tF << std::endl;
    std::cout << a.B28.tT << " " << a.B28.tF << std::endl;
    std::cout << a.B29.tT << " " << a.B29.tF << std::endl;
    std::cout << a.B30.tT << " " << a.B30.tF << std::endl;
    std::cout << a.B31.tT << " " << a.B31.tF << std::endl;
}

void uintToDR4(DR4Bits *a, unsigned int n)
{
    a->B0.set ((n >> 0)  & 1);
    a->B1.set ((n >> 1)  & 1);
    a->B2.set ((n >> 2)  & 1);
    a->B3.set ((n >> 3)  & 1);
}
void uintToDR32(DR32Bits *a, unsigned int n)
{
    a->B0.set ((n >> 0)  & 1);
    a->B1.set ((n >> 1)  & 1);
    a->B2.set ((n >> 2)  & 1);
    a->B3.set ((n >> 3)  & 1);
    a->B4.set ((n >> 4)  & 1);
    a->B5.set ((n >> 5)  & 1);
    a->B6.set ((n >> 6)  & 1);
    a->B7.set ((n >> 7)  & 1);
    a->B8.set ((n >> 8)  & 1);
    a->B9.set ((n >> 9)  & 1);
    a->B10.set((n >> 10) & 1);
    a->B11.set((n >> 11) & 1);
    a->B12.set((n >> 12) & 1);
    a->B13.set((n >> 13) & 1);
    a->B14.set((n >> 14) & 1);
    a->B15.set((n >> 15) & 1);
    a->B16.set((n >> 16) & 1);
    a->B17.set((n >> 17) & 1);
    a->B18.set((n >> 18) & 1);
    a->B19.set((n >> 19) & 1);
    a->B20.set((n >> 20) & 1);
    a->B21.set((n >> 21) & 1);
    a->B22.set((n >> 22) & 1);
    a->B23.set((n >> 23) & 1);
    a->B24.set((n >> 24) & 1);
    a->B25.set((n >> 25) & 1);
    a->B26.set((n >> 26) & 1);
    a->B27.set((n >> 27) & 1);
    a->B28.set((n >> 28) & 1);
    a->B29.set((n >> 29) & 1);
    a->B30.set((n >> 30) & 1);
    a->B31.set((n >> 31) & 1);
}
unsigned int DR32ToUint(DR32Bits a)
{
    unsigned int out = 0;

    out |= (a.B0.T  & 1) << 0;
    out |= (a.B1.T  & 1) << 1;
    out |= (a.B2.T  & 1) << 2;
    out |= (a.B3.T  & 1) << 3;
    out |= (a.B4.T  & 1) << 4;
    out |= (a.B5.T  & 1) << 5;
    out |= (a.B6.T  & 1) << 6;
    out |= (a.B7.T  & 1) << 7;
    out |= (a.B8.T  & 1) << 8;
    out |= (a.B9.T  & 1) << 9;
    out |= (a.B10.T & 1) << 10;
    out |= (a.B11.T & 1) << 11;
    out |= (a.B12.T & 1) << 12;
    out |= (a.B13.T & 1) << 13;
    out |= (a.B14.T & 1) << 14;
    out |= (a.B15.T & 1) << 15;
    out |= (a.B16.T & 1) << 16;
    out |= (a.B17.T & 1) << 17;
    out |= (a.B18.T & 1) << 18;
    out |= (a.B19.T & 1) << 19;
    out |= (a.B20.T & 1) << 20;
    out |= (a.B21.T & 1) << 21;
    out |= (a.B22.T & 1) << 22;
    out |= (a.B23.T & 1) << 23;
    out |= (a.B24.T & 1) << 24;
    out |= (a.B25.T & 1) << 25;
    out |= (a.B26.T & 1) << 26;
    out |= (a.B27.T & 1) << 27;
    out |= (a.B28.T & 1) << 28;
    out |= (a.B29.T & 1) << 29;
    out |= (a.B30.T & 1) << 30;
    out |= (a.B31.T & 1) << 31;

    return out;
}

int DRKSA32Wrapper(unsigned int aInt, unsigned int bInt, unsigned int cInt)
{
    DR32Bits a, b;
    DR c;
    unsigned int max;

    uintToDR32(&a, aInt);
    uintToDR32(&b, bInt);
    c.set(cInt);
    KSA32DR_out out = DR_KSA32(a, b, c);
    out = DR_KSA32(out.B, b, c);
    out = DR_KSA32(a, out.B, c);
    max = getLatestArrival32B(out.B);
    // std::cout << "a = " << aInt << " : b = " << bInt << " : c = " << cInt << " | Last bit time: " << max << std::endl;
    // std::cout << "out.B.B0.tT : " << out.B.B0.tT << " | out.B.B0.tF : " << out.B.B0.tF << std::endl;
    // std::cout << "out.B.B1.tT : " << out.B.B1.tT << " | out.B.B1.tF : " << out.B.B1.tF << std::endl;
    // std::cout << "out.B.B2.tT : " << out.B.B2.tT << " | out.B.B2.tF : " << out.B.B2.tF << std::endl;
    // std::cout << "out.B.B3.tT : " << out.B.B3.tT << " | out.B.B3.tF : " << out.B.B3.tF << std::endl;
    // std::cout << "out.B.B4.tT : " << out.B.B4.tT << " | out.B.B4.tF : " << out.B.B4.tF << std::endl;
    // std::cout << "out.B.B5.tT : " << out.B.B5.tT << " | out.B.B5.tF : " << out.B.B5.tF << std::endl;
    // std::cout << "out.B.B6.tT : " << out.B.B6.tT << " | out.B.B6.tF : " << out.B.B6.tF << std::endl;
    // std::cout << "out.B.B7.tT : " << out.B.B7.tT << " | out.B.B7.tF : " << out.B.B7.tF << std::endl;
    // std::cout << "out.B.B8.tT : " << out.B.B8.tT << " | out.B.B8.tF : " << out.B.B8.tF << std::endl;
    // std::cout << "out.B.B9.tT : " << out.B.B9.tT << " | out.B.B9.tF : " << out.B.B9.tF << std::endl;
    // std::cout << "out.B.B10.tT : " << out.B.B10.tT << " | out.B.B10.tF : " << out.B.B10.tF << std::endl;
    // std::cout << "out.B.B11.tT : " << out.B.B11.tT << " | out.B.B11.tF : " << out.B.B11.tF << std::endl;
    // std::cout << "out.B.B12.tT : " << out.B.B12.tT << " | out.B.B12.tF : " << out.B.B12.tF << std::endl;
    // std::cout << "out.B.B13.tT : " << out.B.B13.tT << " | out.B.B13.tF : " << out.B.B13.tF << std::endl;
    // std::cout << "out.B.B14.tT : " << out.B.B14.tT << " | out.B.B14.tF : " << out.B.B14.tF << std::endl;
    // std::cout << "out.B.B15.tT : " << out.B.B15.tT << " | out.B.B15.tF : " << out.B.B15.tF << std::endl;
    // std::cout << "out.B.B16.tT : " << out.B.B16.tT << " | out.B.B16.tF : " << out.B.B16.tF << std::endl;
    // std::cout << "out.B.B17.tT : " << out.B.B17.tT << " | out.B.B17.tF : " << out.B.B17.tF << std::endl;
    // std::cout << "out.B.B18.tT : " << out.B.B18.tT << " | out.B.B18.tF : " << out.B.B18.tF << std::endl;
    // std::cout << "out.B.B19.tT : " << out.B.B19.tT << " | out.B.B19.tF : " << out.B.B19.tF << std::endl;
    // std::cout << "out.B.B20.tT : " << out.B.B20.tT << " | out.B.B20.tF : " << out.B.B20.tF << std::endl;
    // std::cout << "out.B.B21.tT : " << out.B.B21.tT << " | out.B.B21.tF : " << out.B.B21.tF << std::endl;
    // std::cout << "out.B.B22.tT : " << out.B.B22.tT << " | out.B.B22.tF : " << out.B.B22.tF << std::endl;
    // std::cout << "out.B.B23.tT : " << out.B.B23.tT << " | out.B.B23.tF : " << out.B.B23.tF << std::endl;
    // std::cout << "out.B.B24.tT : " << out.B.B24.tT << " | out.B.B24.tF : " << out.B.B24.tF << std::endl;
    // std::cout << "out.B.B25.tT : " << out.B.B25.tT << " | out.B.B25.tF : " << out.B.B25.tF << std::endl;
    // std::cout << "out.B.B26.tT : " << out.B.B26.tT << " | out.B.B26.tF : " << out.B.B26.tF << std::endl;
    // std::cout << "out.B.B27.tT : " << out.B.B27.tT << " | out.B.B27.tF : " << out.B.B27.tF << std::endl;
    // std::cout << "out.B.B28.tT : " << out.B.B28.tT << " | out.B.B28.tF : " << out.B.B28.tF << std::endl;
    // std::cout << "out.B.B29.tT : " << out.B.B29.tT << " | out.B.B29.tF : " << out.B.B29.tF << std::endl;
    // std::cout << "out.B.B30.tT : " << out.B.B30.tT << " | out.B.B30.tF : " << out.B.B30.tF << std::endl;
    // std::cout << "out.B.B31.tT : " << out.B.B31.tT << " | out.B.B31.tF : " << out.B.B31.tF << std::endl;
    // std::cout << "out.Cout.tT : " << out.Cout.tT << " | out.Cout.tF : " << out.Cout.tF << std::endl;
    return max;
}
void findDRKSA32Delay()
{
    DR32Bits a, b;
    DR c;
    unsigned int aInt, bInt, cInt;
    unsigned int tempA, tempB, tempC;
    unsigned int avg = 0;
    unsigned int max = 0, maxA, maxB, maxC;
    unsigned int min = 999, minA, minB, minC;
    std::random_device rd; 
    std::mt19937 gen(0); 
    std::uniform_int_distribution<uint32_t> distr(0, 0xFFFFFFFF);

    int iters = 1000000;
    for(int i=0 ; i<iters ; i++)
    {
        tempA = distr(gen);
        tempB = distr(gen);
        tempC = distr(gen)%2;
        unsigned int tempMax = DRKSA32Wrapper(tempA, tempB, tempC);
        if(tempMax > max) 
        {
            max = tempMax;
            maxA = tempA;
            maxB = tempB;
            maxC = tempC;
        }
        if(tempMax < min)
        {
            min = tempMax;
            minA = tempA;
            minB = tempB;
            minC = tempC;
        }
        avg += tempMax;
    }

    avg /= iters;
    std::cout << "Avg : " << avg << std::endl;
    std::cout << std::endl;
    std::cout << "Max : " << max << std::endl;
    std::cout << "MaxA : " << maxA << std::endl;
    std::cout << "MaxB : " << maxB << std::endl;
    std::cout << "MaxC : " << maxC << std::endl;
    std::cout << std::endl;
    std::cout << "Min : " << min << std::endl;
    std::cout << "MinA : " << minA << std::endl;
    std::cout << "MinB : " << minB << std::endl;
    std::cout << "MinC : " << minC << std::endl;

    // DRKSA32Wrapper(0, 0, 0);
    // DRKSA32Wrapper(4294967295, 4294967295, 1);
    // DRKSA32Wrapper(4294967295, 0, 1);
    return;
}
