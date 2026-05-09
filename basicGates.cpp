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

class bit
{
    public:
        bool v;
        int t;
        bit()
        {
            t=0;
        }
};
class bitGP
{
    public: 
        bit g;
        bit p;
        int t;
};
class bit4
{
    public:
        bit b[4];
        int t;
};
class bit32
{
    public:
        bit b[32];
        int t;
        void set(bit32 a)
        {
            for(int i=0;i<32;i++)
            {
                b[i] = a.b[i];
            }
        }
        void setGC(int gc)
        {
            t = gc;
            for(int i=0;i<32;i++)
            {
                b[i].t = gc;
            }
        }
};

// Basic gates
bit NOT(bit a)
{
    bit out;

    // Gate 2
    out.v = !a.v;

    out.t = a.t + NOTDELAY;

    return out;
}
bit AND(bit a, bit b)
{
    bit out;

    out.v = a.v && b.v;
    out.t = std::max(a.t, b.t) + ANDDELAY;

    return out;
}
bit XOR2(bit a, bit b)
{
    bit out;

    // This is gate 1
    // All of them run in parallel
    out.v = a.v ^ b.v;
    out.t = std::max(a.t, b.t) + XOR2DELAY;

    return out;
}
bit XOR3(bit a, bit b, bit c)
{
    bit out;

    out.v = a.v ^ b.v ^ c.v;
    out.t = std::max({a.t, b.t, c.t}) + XOR3DELAY;

    return out;
}
bit OR(bit a, bit b)
{
    bit out;

    out.v = a.v || b.v;
    out.t = std::max(a.t, b.t) + ORDELAY;

    return out;
}
bit32 XOR2(bit32 a, bit32 b)
{
    bit32 out;
    
    int maxTime = 0;

    for(int i=0;i<32;i++)
    {
        out.b[i] = XOR2(a.b[i], b.b[i]);
        if(out.b[i].t > maxTime) maxTime = out.b[i].t;
    }

    out.t = maxTime;

    return out;
}
bit32 XOR3(bit32 a, bit32 b, bit32 c)
{
    bit32 out;
    
    int maxTime = 0;

    for(int i=0;i<32;i++)
    {
        out.b[i] = XOR3(a.b[i], b.b[i], c.b[i]);
        if(out.b[i].t > maxTime) maxTime = out.b[i].t;
    }

    out.t = maxTime;

    return out;
}
bit32 AND(bit32 a, bit32 b)
{
    bit32 out;
    
    int maxTime = 0;

    for(int i=0;i<32;i++)
    {
        out.b[i] = AND(a.b[i], b.b[i]);
        if(out.b[i].t > maxTime) maxTime = out.b[i].t;
    }

    out.t = maxTime;

    return out;
}
bit32 NOT(bit32 a)
{
    bit32 out;
    
    int maxTime = 0;

    for(int i=0;i<32;i++)
    {
        out.b[i] = NOT(a.b[i]);
        if(out.b[i].t > maxTime) maxTime = out.b[i].t;
    }

    out.t = maxTime;

    return out;
}
// Taken from the Yadav thesis

bit BUF(bit c)
{
    bit out;

    out.v = c.v;

    out.t = c.t + BUFDELAY;

    return out; 
}
bit GREY(bit g, bit p, bit c)
{
    bit out;

    bit a, b;

    out = OR(g, AND(p, c));

    return out;
}
bit SUM(bit p, bit c)
{
    bit out;

    out = XOR2(p, c);

    return out;
}
bitGP GP(bit a, bit b)
{
    bitGP out;

    out.g = AND(a, b);
    out.p = XOR2(a, b);

    out.t = std::max(out.g.t, out.p.t);
    
    return out;
}
bitGP CARRY(bit g1, bit g2, bit p1, bit p2)
{
    bitGP out;


    out.g = OR(g2,  AND(p2, g1));
    out.p = AND(p1, p2);

    out.t = std::max(out.g.t, out.p.t);

    return out;
}

