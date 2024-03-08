#include <stdio.h>
#include <math.h>

double Perimetr(double a, double b, double c) 
{
    return a + b + c;
}

double Square(double a, double b, double c) 
{
    double square = Perimetr(a, b, c) / 2;
    return sqrt(square * (square - a) * (square - b) * (square - c));
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
    if (a + b > c && a + c > b && b + c > a) 
    {
        double perimeter = Perimetr(a, b, c);
        double area = Square(a, b, c);
        printf("Периметр = %lf\n", Perimetr);
        printf("Площадь = %lf\n", Square);
    }
    return 0;
}
