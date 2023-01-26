#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c)
{

    long double D = b*b - 4*a*c;

    struct QuadraticRootsResult roots;

    roots.norealroots = 0;

    if(D > 0)
    {
        roots.x1 = ((-b - sqrtl(D)) / (2 * a));
        roots.x2 = ((-b + sqrtl(D)) / (2 * a));
    }
    if(D == 0)
    {
        roots.x1 = (0 - b) / (2 * a);
        roots.x2 = roots.x1;
    }
    if(D < 0)
    {
        roots.norealroots = 1;
    }

    return roots;
}
