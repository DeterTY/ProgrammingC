#include <stdio.h>
#include <math.h>

double P(double a, double b, double c)
{
    return (a + b + c);
}

double S(double a, double b, double c)
{
    return (sqrt((P(a, b, c) / 2) * ((P(a, b, c) / 2) - a) * ((P(a, b, c) / 2) - b) * ((P(a, b, c) / 2) - c)));
}

int main()
{
    double a, b, c;
    
    printf("Введите длину для стороны треугольника A: ");
    scanf("%lf", &a);
    printf("Введите длину для стороны треугольника B: ");
    scanf("%lf", &b);
    printf("Введите длину для стороны треугольника C: ");
    scanf("%lf", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
       double Perimeter = P(a, b, c);
       double Square = S(a, b, c);
       printf("Периметр = %lf\n", Perimeter);
       printf("Площадь = %lf\n", Square);
 
    }
    else
    {
        printf("Треугольника с такими сторонами не существует.");
    }
    
    return 0;
}
