#include <math.h>
#include <stdbool.h>

double P(double a, double b, double c)
{
    return (a + b + c);
}

double S(double a, double b, double c)
{
    return (sqrt((P(a, b, c) / 2) * ((P(a, b, c) / 2) - a) * ((P(a, b, c) / 2) - b) * ((P(a, b, c) / 2) - c)));
}

bool E(double a, double b, double c)
{
    return ((a + b > c) && (a + c > b) && (b + c > a));
}
