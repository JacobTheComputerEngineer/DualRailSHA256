#include <iostream>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <random>

#pragma once

#define BUFDELAY   1
#define NOTDELAY   1
#define ANDDELAY   1
#define ORDELAY    1
#define XOR2DELAY  2
#define XOR3DELAY  3

static const int INF = std::numeric_limits<int>::max();
inline int addDelay(int t, int d)
{
    if (t == INF) return INF;
    return t + d;
}

class DR
{
    public:
        bool T;
        bool F;
        int tT;
        int tF;

        DR()
        {
            T = 0;
            F = 0;
            tT = 0;
            tF = 0;
        }

        bool valid()
        {
            return T != F;
        }
        bool waiting()
        {
            return !T && !F;
        }
        bool illegal()
        {
            return T && F;
        }
    
        void set(bool v)
        {
            T = v;
            F = !v;
            if(v)
            {
                tT = 0;
                tF = INF;
            }
            else
            {
                tT = INF;
                tF = 0;
            }
        }
        void setGC(int gc)
        {
            if(T) tT = gc;
            else tF = gc;
        }
        void setWaiting()
        {
            T = 0;
            F = 0;
        }
        void setInvalid()
        {
            T = 1;
            F = 1;
        }
};
class DR_GP_out
{
    public:
        DR G;
        DR P;

        void setWaiting()
        {
            G.setWaiting();
            P.setWaiting();
        }
        void setInvalid()
        {
            G.setInvalid();
            P.setInvalid();
        }
};
class DR4Bits
{
    public:
        DR B0;
        DR B1;
        DR B2;
        DR B3;

        bool valid()
        {
            return (B0.valid() && B1.valid() && B2.valid() && B3.valid());
        }
        bool waiting()
        {
            return (B0.waiting() && B1.waiting() && B2.waiting() && B3.waiting());
        }
        bool illegal()
        {
            return (B0.illegal() && B1.illegal() && B2.illegal() && B3.illegal());
        }

        void setWaiting()
        {
            B0.setWaiting();
            B1.setWaiting();
            B2.setWaiting();
            B3.setWaiting();
        }
        void setInvalid()
        {
            B0.setInvalid();
            B1.setInvalid();
            B2.setInvalid();
            B3.setInvalid();
        }
};
class DR32Bits
{
    public:
        DR B0;
        DR B1;
        DR B2;
        DR B3;
        DR B4;
        DR B5;
        DR B6;
        DR B7;
        DR B8;
        DR B9;
        DR B10;
        DR B11;
        DR B12;
        DR B13;
        DR B14;
        DR B15;
        DR B16;
        DR B17;
        DR B18;
        DR B19;
        DR B20;
        DR B21;
        DR B22;
        DR B23;
        DR B24;
        DR B25;
        DR B26;
        DR B27;
        DR B28;
        DR B29;
        DR B30;
        DR B31;

        bool valid()
        {
            return (B0.valid() && B1.valid() && B2.valid() && B3.valid() && B4.valid() && B5.valid() && B6.valid() && B7.valid() && 
                    B8.valid() && B9.valid() && B10.valid() && B11.valid() && B12.valid() && B13.valid() && B14.valid() && B15.valid() && 
                    B16.valid() && B17.valid() && B18.valid() && B19.valid() && B20.valid() && B21.valid() && B22.valid() && B23.valid() && 
                    B24.valid() && B25.valid() && B26.valid() && B27.valid() && B28.valid() && B29.valid() && B30.valid() && B31.valid());
        }
        bool waiting()
        {
            return (B0.waiting() && B1.waiting() && B2.waiting() && B3.waiting() && B4.waiting() && B5.waiting() && B6.waiting() && B7.waiting() && 
                    B8.waiting() && B9.waiting() && B10.waiting() && B11.waiting() && B12.waiting() && B13.waiting() && B14.waiting() && B15.waiting() && 
                    B16.waiting() && B17.waiting() && B18.waiting() && B19.waiting() && B20.waiting() && B21.waiting() && B22.waiting() && B23.waiting() && 
                    B24.waiting() && B25.waiting() && B26.waiting() && B27.waiting() && B28.waiting() && B29.waiting() && B30.waiting() && B31.waiting());
        }
        bool illegal()
        {
            return (B0.illegal() && B1.illegal() && B2.illegal() && B3.illegal() && B4.illegal() && B5.illegal() && B6.illegal() && B7.illegal() && 
                    B8.illegal() && B9.illegal() && B10.illegal() && B11.illegal() && B12.illegal() && B13.illegal() && B14.illegal() && B15.illegal() && 
                    B16.illegal() && B17.illegal() && B18.illegal() && B19.illegal() && B20.illegal() && B21.illegal() && B22.illegal() && B23.illegal() && 
                    B24.illegal() && B25.illegal() && B26.illegal() && B27.illegal() && B28.illegal() && B29.illegal() && B30.illegal() && B31.illegal());
        }

        void setGC(int gc)
        {
            B0.setGC(gc);
            B1.setGC(gc);
            B2.setGC(gc);
            B3.setGC(gc);
            B4.setGC(gc);
            B5.setGC(gc);
            B6.setGC(gc);
            B7.setGC(gc);
            B8.setGC(gc);
            B9.setGC(gc);
            B10.setGC(gc);
            B11.setGC(gc);
            B12.setGC(gc);
            B13.setGC(gc);
            B14.setGC(gc);
            B15.setGC(gc);
            B16.setGC(gc);
            B17.setGC(gc);
            B18.setGC(gc);
            B19.setGC(gc);
            B20.setGC(gc);
            B21.setGC(gc);
            B22.setGC(gc);
            B23.setGC(gc);
            B24.setGC(gc);
            B25.setGC(gc);
            B26.setGC(gc);
            B27.setGC(gc);
            B28.setGC(gc);
            B29.setGC(gc);
            B30.setGC(gc);
            B31.setGC(gc);
        }
        void setWaiting()
        {
            B0.setWaiting();
            B1.setWaiting();
            B2.setWaiting();
            B3.setWaiting();
            B4.setWaiting();
            B5.setWaiting();
            B6.setWaiting();
            B7.setWaiting();
            B8.setWaiting();
            B9.setWaiting();
            B10.setWaiting();
            B11.setWaiting();
            B12.setWaiting();
            B13.setWaiting();
            B14.setWaiting();
            B15.setWaiting();
            B16.setWaiting();
            B17.setWaiting();
            B18.setWaiting();
            B19.setWaiting();
            B20.setWaiting();
            B21.setWaiting();
            B22.setWaiting();
            B23.setWaiting();
            B24.setWaiting();
            B25.setWaiting();
            B26.setWaiting();
            B27.setWaiting();
            B28.setWaiting();
            B29.setWaiting();
            B30.setWaiting();
            B31.setWaiting();
        }
        void setInvalid()
        {
            B0.setInvalid();
            B1.setInvalid();
            B2.setInvalid();
            B3.setInvalid();
            B4.setInvalid();
            B5.setInvalid();
            B6.setInvalid();
            B7.setInvalid();
            B8.setInvalid();
            B9.setInvalid();
            B10.setInvalid();
            B11.setInvalid();
            B12.setInvalid();
            B13.setInvalid();
            B14.setInvalid();
            B15.setInvalid();
            B16.setInvalid();
            B17.setInvalid();
            B18.setInvalid();
            B19.setInvalid();
            B20.setInvalid();
            B21.setInvalid();
            B22.setInvalid();
            B23.setInvalid();
            B24.setInvalid();
            B25.setInvalid();
            B26.setInvalid();
            B27.setInvalid();
            B28.setInvalid();
            B29.setInvalid();
            B30.setInvalid();
            B31.setInvalid();
        }
        void set(DR32Bits a)
        {
            B0 = a.B0;
            B1 = a.B1;
            B2 = a.B2;
            B3 = a.B3;
            B4 = a.B4;
            B5 = a.B5;
            B6 = a.B6;
            B7 = a.B7;
            B8 = a.B8;
            B9 = a.B9;
            B10 = a.B10;
            B11 = a.B11;
            B12 = a.B12;
            B13 = a.B13;
            B14 = a.B14;
            B15 = a.B15;
            B16 = a.B16;
            B17 = a.B17;
            B18 = a.B18;
            B19 = a.B19;
            B20 = a.B20;
            B21 = a.B21;
            B22 = a.B22;
            B23 = a.B23;
            B24 = a.B24;
            B25 = a.B25;
            B26 = a.B26;
            B27 = a.B27;
            B28 = a.B28;
            B29 = a.B29;
            B30 = a.B30;
            B31 = a.B31;
        }
    };

// Basic gates
DR DR_NOT(DR a)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.T = a.F;
    out.F = a.T;

    out.tT = addDelay(a.tF, NOTDELAY);
    out.tF = addDelay(a.tT, NOTDELAY);
    

    return out;
}
DR DR_AND(DR a, DR b)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting() || b.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal() || b.illegal())
    {
        out.setInvalid();
        return out;
    }

    // This is gate 1
    // All of them run in parallel
    bool andFF = a.F & b.F;
    int timeandFF = std::max(a.tF, b.tF);
    bool andFT = a.F & b.T;
    int timeandFT = std::max(a.tF, b.tT);
    bool andTF = a.T & b.F;
    int timeandTF = std::max(a.tT, b.tF);
    bool andTT = a.T & b.T;
    int timeandTT = std::max(a.tT, b.tT);

    // Gate 2
    out.T = andTT;
    out.F = andFF || andFT || andTF;

    out.tT = addDelay(timeandTT, ANDDELAY);
    out.tF = addDelay(std::min({timeandFF, timeandFT, timeandTF}), ANDDELAY + ORDELAY);

    return out;
}
DR DR_XOR2(DR a, DR b)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting() || b.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal() || b.illegal())
    {
        out.setInvalid();
        return out;
    }

    // This is gate 1
    // All of them run in parallel
    bool andFF = a.F & b.F;
    int timeandFF = std::max(a.tF, b.tF);
    bool andFT = a.F & b.T;
    int timeandFT = std::max(a.tF, b.tT);
    bool andTF = a.T & b.F;
    int timeandTF = std::max(a.tT, b.tF);
    bool andTT = a.T & b.T;
    int timeandTT = std::max(a.tT, b.tT);

    // Gate 2
    out.T = andTF || andFT;
    out.F = andFF || andTT;

    out.tT = addDelay(std::min(timeandTF, timeandFT), ANDDELAY + ORDELAY);
    out.tF = addDelay(std::min(timeandFF, timeandTT), ANDDELAY + ORDELAY);

    return out;
}
DR DR_XOR3(DR a, DR b, DR c)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting() || b.waiting() || c.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal() || b.illegal() || c.illegal())
    {
        out.setInvalid();
        return out;
    }

    // This is gate 1
    // All of them run in parallel
    bool andFFF = a.F && b.F && c.F;
    int timeandFFF = std::max({a.tF, b.tF, c.tF});
    bool andFFT = a.F && b.F && c.T;
    int timeandFFT = std::max({a.tF, b.tF, c.tT});
    bool andFTF = a.F && b.T && c.F;
    int timeandFTF = std::max({a.tF, b.tT, c.tF});
    bool andFTT = a.F && b.T && c.T;
    int timeandFTT = std::max({a.tF, b.tT, c.tT});
    bool andTFF = a.T && b.F && c.F;
    int timeandTFF = std::max({a.tT, b.tF, c.tF});
    bool andTFT = a.T && b.F && c.T;
    int timeandTFT = std::max({a.tT, b.tF, c.tT});
    bool andTTF = a.T && b.T && c.F;
    int timeandTTF = std::max({a.tT, b.tT, c.tF});
    bool andTTT = a.T && b.T && c.T;
    int timeandTTT = std::max({a.tT, b.tT, c.tT});

    // Gate 2
    out.T = andFFT || andFTF || andTFF || andTTT;
    out.F = andFFF || andFTT || andTFT || andTTF;

    out.tT = addDelay(std::min({timeandFFT, timeandFTF, timeandTFF, timeandTTT}), ANDDELAY + ORDELAY);
    out.tF = addDelay(std::min({timeandFFF, timeandFTT, timeandTFT, timeandTTF}), ANDDELAY + ORDELAY);

    return out;
}
DR DR_OR(DR a, DR b)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting() || b.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal() || b.illegal())
    {
        out.setInvalid();
        return out;
    }

    // This is gate 1
    // All of them run in parallel
    bool andFF = a.F & b.F;
    int timeandFF = std::max(a.tF, b.tF);
    bool andFT = a.F & b.T;
    int timeandFT = std::max(a.tF, b.tT);
    bool andTF = a.T & b.F;
    int timeandTF = std::max(a.tT, b.tF);
    bool andTT = a.T & b.T;
    int timeandTT = std::max(a.tT, b.tT);

    // Gate 2
    out.T = andTT || andFT || andTF;
    out.F = andFF;
    
    out.tT = addDelay(std::min({timeandTT, timeandFT, timeandTF}), ANDDELAY + ORDELAY);
    out.tF = addDelay(timeandFF, ANDDELAY);

    return out;
}
DR32Bits DR_XOR2(DR32Bits a, DR32Bits b)
{
    DR32Bits out;
    out.B0 = DR_XOR2(a.B0, b.B0);
    out.B1 = DR_XOR2(a.B1, b.B1);
    out.B2 = DR_XOR2(a.B2, b.B2);
    out.B3 = DR_XOR2(a.B3, b.B3);
    out.B4 = DR_XOR2(a.B4, b.B4);
    out.B5 = DR_XOR2(a.B5, b.B5);
    out.B6 = DR_XOR2(a.B6, b.B6);
    out.B7 = DR_XOR2(a.B7, b.B7);
    out.B8 = DR_XOR2(a.B8, b.B8);
    out.B9 = DR_XOR2(a.B9, b.B9);
    out.B10 = DR_XOR2(a.B10, b.B10);
    out.B11 = DR_XOR2(a.B11, b.B11);
    out.B12 = DR_XOR2(a.B12, b.B12);
    out.B13 = DR_XOR2(a.B13, b.B13);
    out.B14 = DR_XOR2(a.B14, b.B14);
    out.B15 = DR_XOR2(a.B15, b.B15);
    out.B16 = DR_XOR2(a.B16, b.B16);
    out.B17 = DR_XOR2(a.B17, b.B17);
    out.B18 = DR_XOR2(a.B18, b.B18);
    out.B19 = DR_XOR2(a.B19, b.B19);
    out.B20 = DR_XOR2(a.B20, b.B20);
    out.B21 = DR_XOR2(a.B21, b.B21);
    out.B22 = DR_XOR2(a.B22, b.B22);
    out.B23 = DR_XOR2(a.B23, b.B23);
    out.B24 = DR_XOR2(a.B24, b.B24);
    out.B25 = DR_XOR2(a.B25, b.B25);
    out.B26 = DR_XOR2(a.B26, b.B26);
    out.B27 = DR_XOR2(a.B27, b.B27);
    out.B28 = DR_XOR2(a.B28, b.B28);
    out.B29 = DR_XOR2(a.B29, b.B29);
    out.B30 = DR_XOR2(a.B30, b.B30);
    out.B31 = DR_XOR2(a.B31, b.B31);

    return out;
}
DR32Bits DR_XOR3(DR32Bits a, DR32Bits b, DR32Bits c)
{
    DR32Bits out;
    out.B0 = DR_XOR3(a.B0, b.B0, c.B0);
    out.B1 = DR_XOR3(a.B1, b.B1, c.B1);
    out.B2 = DR_XOR3(a.B2, b.B2, c.B2);
    out.B3 = DR_XOR3(a.B3, b.B3, c.B3);
    out.B4 = DR_XOR3(a.B4, b.B4, c.B4);
    out.B5 = DR_XOR3(a.B5, b.B5, c.B5);
    out.B6 = DR_XOR3(a.B6, b.B6, c.B6);
    out.B7 = DR_XOR3(a.B7, b.B7, c.B7);
    out.B8 = DR_XOR3(a.B8, b.B8, c.B8);
    out.B9 = DR_XOR3(a.B9, b.B9, c.B9);
    out.B10 = DR_XOR3(a.B10, b.B10, c.B10);
    out.B11 = DR_XOR3(a.B11, b.B11, c.B11);
    out.B12 = DR_XOR3(a.B12, b.B12, c.B12);
    out.B13 = DR_XOR3(a.B13, b.B13, c.B13);
    out.B14 = DR_XOR3(a.B14, b.B14, c.B14);
    out.B15 = DR_XOR3(a.B15, b.B15, c.B15);
    out.B16 = DR_XOR3(a.B16, b.B16, c.B16);
    out.B17 = DR_XOR3(a.B17, b.B17, c.B17);
    out.B18 = DR_XOR3(a.B18, b.B18, c.B18);
    out.B19 = DR_XOR3(a.B19, b.B19, c.B19);
    out.B20 = DR_XOR3(a.B20, b.B20, c.B20);
    out.B21 = DR_XOR3(a.B21, b.B21, c.B21);
    out.B22 = DR_XOR3(a.B22, b.B22, c.B22);
    out.B23 = DR_XOR3(a.B23, b.B23, c.B23);
    out.B24 = DR_XOR3(a.B24, b.B24, c.B24);
    out.B25 = DR_XOR3(a.B25, b.B25, c.B25);
    out.B26 = DR_XOR3(a.B26, b.B26, c.B26);
    out.B27 = DR_XOR3(a.B27, b.B27, c.B27);
    out.B28 = DR_XOR3(a.B28, b.B28, c.B28);
    out.B29 = DR_XOR3(a.B29, b.B29, c.B29);
    out.B30 = DR_XOR3(a.B30, b.B30, c.B30);
    out.B31 = DR_XOR3(a.B31, b.B31, c.B31);

    return out;
}
DR32Bits DR_AND(DR32Bits a, DR32Bits b)
{
    DR32Bits out;
    out.B0 = DR_AND(a.B0, b.B0);
    out.B1 = DR_AND(a.B1, b.B1);
    out.B2 = DR_AND(a.B2, b.B2);
    out.B3 = DR_AND(a.B3, b.B3);
    out.B4 = DR_AND(a.B4, b.B4);
    out.B5 = DR_AND(a.B5, b.B5);
    out.B6 = DR_AND(a.B6, b.B6);
    out.B7 = DR_AND(a.B7, b.B7);
    out.B8 = DR_AND(a.B8, b.B8);
    out.B9 = DR_AND(a.B9, b.B9);
    out.B10 = DR_AND(a.B10, b.B10);
    out.B11 = DR_AND(a.B11, b.B11);
    out.B12 = DR_AND(a.B12, b.B12);
    out.B13 = DR_AND(a.B13, b.B13);
    out.B14 = DR_AND(a.B14, b.B14);
    out.B15 = DR_AND(a.B15, b.B15);
    out.B16 = DR_AND(a.B16, b.B16);
    out.B17 = DR_AND(a.B17, b.B17);
    out.B18 = DR_AND(a.B18, b.B18);
    out.B19 = DR_AND(a.B19, b.B19);
    out.B20 = DR_AND(a.B20, b.B20);
    out.B21 = DR_AND(a.B21, b.B21);
    out.B22 = DR_AND(a.B22, b.B22);
    out.B23 = DR_AND(a.B23, b.B23);
    out.B24 = DR_AND(a.B24, b.B24);
    out.B25 = DR_AND(a.B25, b.B25);
    out.B26 = DR_AND(a.B26, b.B26);
    out.B27 = DR_AND(a.B27, b.B27);
    out.B28 = DR_AND(a.B28, b.B28);
    out.B29 = DR_AND(a.B29, b.B29);
    out.B30 = DR_AND(a.B30, b.B30);
    out.B31 = DR_AND(a.B31, b.B31);

    return out;
}
DR32Bits DR_NOT(DR32Bits a)
{
    DR32Bits out;
    out.B0 = DR_NOT(a.B0);
    out.B1 = DR_NOT(a.B1);
    out.B2 = DR_NOT(a.B2);
    out.B3 = DR_NOT(a.B3);
    out.B4 = DR_NOT(a.B4);
    out.B5 = DR_NOT(a.B5);
    out.B6 = DR_NOT(a.B6);
    out.B7 = DR_NOT(a.B7);
    out.B8 = DR_NOT(a.B8);
    out.B9 = DR_NOT(a.B9);
    out.B10 = DR_NOT(a.B10);
    out.B11 = DR_NOT(a.B11);
    out.B12 = DR_NOT(a.B12);
    out.B13 = DR_NOT(a.B13);
    out.B14 = DR_NOT(a.B14);
    out.B15 = DR_NOT(a.B15);
    out.B16 = DR_NOT(a.B16);
    out.B17 = DR_NOT(a.B17);
    out.B18 = DR_NOT(a.B18);
    out.B19 = DR_NOT(a.B19);
    out.B20 = DR_NOT(a.B20);
    out.B21 = DR_NOT(a.B21);
    out.B22 = DR_NOT(a.B22);
    out.B23 = DR_NOT(a.B23);
    out.B24 = DR_NOT(a.B24);
    out.B25 = DR_NOT(a.B25);
    out.B26 = DR_NOT(a.B26);
    out.B27 = DR_NOT(a.B27);
    out.B28 = DR_NOT(a.B28);
    out.B29 = DR_NOT(a.B29);
    out.B30 = DR_NOT(a.B30);
    out.B31 = DR_NOT(a.B31);

    return out;
}
// Taken from the Yadav thesis
DR DR_BUF(DR c)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(c.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(c.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.T = c.T;
    out.F = c.F;

    out.tT = addDelay(c.tT, BUFDELAY);
    out.tF = addDelay(c.tF, BUFDELAY);

    return out; 
}
DR DR_GREY(DR g, DR p, DR c)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(g.waiting() || p.waiting() || c.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(g.illegal() || p.illegal() || c.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.T = g.T || (p.T && c.T);
    out.F = (g.F && p.F) || (g.F && c.F);

    out.tT = std::min(addDelay(g.tT, ORDELAY), addDelay(std::max(p.tT, c.tT), ANDDELAY + ORDELAY));
    out.tF = addDelay(std::min(std::max(g.tF, p.tF), std::max(g.tF, c.tF)), ANDDELAY + ORDELAY);

    return out;
}
DR DR_SUM(DR p, DR c)
{
    DR out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(p.waiting() || c.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(p.illegal() || c.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.T = (p.F && c.T) || (p.T && c.F);
    out.F = (p.F && c.F) || (p.T && c.T);

    out.tT = addDelay(std::min(std::max(p.tF, c.tT), std::max(p.tT, c.tF)), ANDDELAY + ORDELAY);
    out.tF = addDelay(std::min(std::max(p.tF, c.tF), std::max(p.tT, c.tT)), ANDDELAY + ORDELAY);


    return out;

}
DR_GP_out DR_GP(DR a, DR b)
{
    DR_GP_out out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(a.waiting() || b.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(a.illegal() || b.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.G.T = a.T && b.T;
    out.G.F = a.F || b.F;
    out.P.T = (a.F && b.T) || (a.T && b.F);
    out.P.F = (a.T && b.T) || (a.F && b.F);

    out.G.tT = addDelay(std::max(a.tT, b.tT), ANDDELAY);
    out.G.tF = addDelay(std::min(a.tF, b.tF), ORDELAY);
    out.P.tT = addDelay(std::min(std::max(a.tF, b.tT), std::max(a.tT, b.tF)), ANDDELAY + ORDELAY);
    out.P.tF = addDelay(std::min(std::max(a.tT, b.tT), std::max(a.tF, b.tF)), ANDDELAY + ORDELAY);

    return out;
}
DR_GP_out DR_CARRY(DR g1, DR g2, DR p1, DR p2)
{
    DR_GP_out out;

    // If xT anf xF are equal to 0, data has not yet been received, propagate 0,0
    if(g1.waiting() || g2.waiting() || p1.waiting() || p2.waiting())
    {
        out.setWaiting();
        return out;
    }
    // If xT and xF are equal to 1, invalid
    if(g1.illegal() || g2.illegal() || p1.illegal() || p2.illegal())
    {
        out.setInvalid();
        return out;
    }

    out.G.T = g2.T || (p2.T && g1.T);
    out.G.F = (g2.F && g1.F) || (g2.F && p2.F);
    out.P.T = p1.T && p2.T;
    out.P.F = p1.F || p2.F;

    out.G.tT = std::min(addDelay(g2.tT, ORDELAY), addDelay(std::max(p2.tT, g1.tT), ANDDELAY + ORDELAY));
    out.G.tF = addDelay(std::min(std::max(g2.tF, g1.tF), std::max(g2.tF, p2.tF)), ANDDELAY + ORDELAY);
    out.P.tT = addDelay(std::max(p1.tT, p2.tT), ANDDELAY);
    out.P.tF = addDelay(std::min(p1.tF, p2.tF), ORDELAY);

    return out;
}

int getLatestArrival32B(DR32Bits a)
{
    int out=0;
    if(a.B0.T) if(a.B0.tT > out) out=a.B0.tT;
    if(a.B0.F) if(a.B0.tF > out) out=a.B0.tF;
    if(a.B1.T) if(a.B1.tT > out) out=a.B1.tT;
    if(a.B1.F) if(a.B1.tF > out) out=a.B1.tF;
    if(a.B2.T) if(a.B2.tT > out) out=a.B2.tT;
    if(a.B2.F) if(a.B2.tF > out) out=a.B2.tF;
    if(a.B3.T) if(a.B3.tT > out) out=a.B3.tT;
    if(a.B3.F) if(a.B3.tF > out) out=a.B3.tF;
    if(a.B4.T) if(a.B4.tT > out) out=a.B4.tT;
    if(a.B4.F) if(a.B4.tF > out) out=a.B4.tF;
    if(a.B5.T) if(a.B5.tT > out) out=a.B5.tT;
    if(a.B5.F) if(a.B5.tF > out) out=a.B5.tF;
    if(a.B6.T) if(a.B6.tT > out) out=a.B6.tT;
    if(a.B6.F) if(a.B6.tF > out) out=a.B6.tF;
    if(a.B7.T) if(a.B7.tT > out) out=a.B7.tT;
    if(a.B7.F) if(a.B7.tF > out) out=a.B7.tF;
    if(a.B8.T) if(a.B8.tT > out) out=a.B8.tT;
    if(a.B8.F) if(a.B8.tF > out) out=a.B8.tF;
    if(a.B9.T) if(a.B9.tT > out) out=a.B9.tT;
    if(a.B9.F) if(a.B9.tF > out) out=a.B9.tF;
    if(a.B10.T) if(a.B10.tT > out) out=a.B10.tT;
    if(a.B10.F) if(a.B10.tF > out) out=a.B10.tF;
    if(a.B11.T) if(a.B11.tT > out) out=a.B11.tT;
    if(a.B11.F) if(a.B11.tF > out) out=a.B11.tF;
    if(a.B12.T) if(a.B12.tT > out) out=a.B12.tT;
    if(a.B12.F) if(a.B12.tF > out) out=a.B12.tF;
    if(a.B13.T) if(a.B13.tT > out) out=a.B13.tT;
    if(a.B13.F) if(a.B13.tF > out) out=a.B13.tF;
    if(a.B14.T) if(a.B14.tT > out) out=a.B14.tT;
    if(a.B14.F) if(a.B14.tF > out) out=a.B14.tF;
    if(a.B15.T) if(a.B15.tT > out) out=a.B15.tT;
    if(a.B15.F) if(a.B15.tF > out) out=a.B15.tF;
    if(a.B16.T) if(a.B16.tT > out) out=a.B16.tT;
    if(a.B16.F) if(a.B16.tF > out) out=a.B16.tF;
    if(a.B17.T) if(a.B17.tT > out) out=a.B17.tT;
    if(a.B17.F) if(a.B17.tF > out) out=a.B17.tF;
    if(a.B18.T) if(a.B18.tT > out) out=a.B18.tT;
    if(a.B18.F) if(a.B18.tF > out) out=a.B18.tF;
    if(a.B19.T) if(a.B19.tT > out) out=a.B19.tT;
    if(a.B19.F) if(a.B19.tF > out) out=a.B19.tF;
    if(a.B20.T) if(a.B20.tT > out) out=a.B20.tT;
    if(a.B20.F) if(a.B20.tF > out) out=a.B20.tF;
    if(a.B21.T) if(a.B21.tT > out) out=a.B21.tT;
    if(a.B21.F) if(a.B21.tF > out) out=a.B21.tF;
    if(a.B22.T) if(a.B22.tT > out) out=a.B22.tT;
    if(a.B22.F) if(a.B22.tF > out) out=a.B22.tF;
    if(a.B23.T) if(a.B23.tT > out) out=a.B23.tT;
    if(a.B23.F) if(a.B23.tF > out) out=a.B23.tF;
    if(a.B24.T) if(a.B24.tT > out) out=a.B24.tT;
    if(a.B24.F) if(a.B24.tF > out) out=a.B24.tF;
    if(a.B25.T) if(a.B25.tT > out) out=a.B25.tT;
    if(a.B25.F) if(a.B25.tF > out) out=a.B25.tF;
    if(a.B26.T) if(a.B26.tT > out) out=a.B26.tT;
    if(a.B26.F) if(a.B26.tF > out) out=a.B26.tF;
    if(a.B27.T) if(a.B27.tT > out) out=a.B27.tT;
    if(a.B27.F) if(a.B27.tF > out) out=a.B27.tF;
    if(a.B28.T) if(a.B28.tT > out) out=a.B28.tT;
    if(a.B28.F) if(a.B28.tF > out) out=a.B28.tF;
    if(a.B29.T) if(a.B29.tT > out) out=a.B29.tT;
    if(a.B29.F) if(a.B29.tF > out) out=a.B29.tF;
    if(a.B30.T) if(a.B30.tT > out) out=a.B30.tT;
    if(a.B30.F) if(a.B30.tF > out) out=a.B30.tF;
    if(a.B31.T) if(a.B31.tT > out) out=a.B31.tT;
    if(a.B31.F) if(a.B31.tF > out) out=a.B31.tF;
    return out;
}