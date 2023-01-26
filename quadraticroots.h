#ifndef QUADRATICROOTS_H_
#define QUADRATICROOTS_H_

struct QuadraticRootsResult
{
    double x1;
    double x2;
    int norealroots;
};

struct  QuadraticRootsResult findroots(double a, double b, double c);
#endif
