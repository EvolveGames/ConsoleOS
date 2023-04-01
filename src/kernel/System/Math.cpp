#include "Math.h"

unsigned int rndvalue = 4367;

int Math::IntDivision(const int input, const int divisor)
{
    float dv = input % divisor;
    float d = input / divisor;
    return (int)(d - dv);
}
int Math::Abs(int x)
{
    return (x < 0) ? -x : x;
}
float Math::Smooth(float src, float dest, int time)
{
    float val = ((float)Abs(dest - src)) / (float)time;
    return src < dest ? src + val : src - val;
}
unsigned int Random::Next()
{
    rndvalue = (1664525 * rndvalue + 1013904223) % 4294967296;
    return rndvalue;
}
void Random::SetSeed(int seed)
{
    rndvalue = seed;
}