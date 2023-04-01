#ifndef MATH_H
#define MATH_H

#include "Util.h"

class Math
{
    public:
    static int IntDivision(const int input, const int divisor = 2);
    static int Abs(int x);
    float Smooth(float src, float dest, int time = 100);
    
};
class Random
{
    public:
    unsigned int Next();
    void SetSeed(int Seed);
};

#endif