#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double d;
    double x1, x2;
    
    a = 5.1;
    b = 1;
    c = -2.2;
    
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);
    printf("Введите c: ");
    scanf("%lf", &c);
    
    d = b * b - 4 * a * c;
    printf("d = %lf\n", d);
    
    if (d > 0) {
        x1 = ((-b + sqrt(d))/(2 * a));
        x2 = ((-b - sqrt(d))/(2 * a));
        printf("x1 = %lf x2 = %lf", x1, x2);
    }
    
    if (d == 0) {
        x1 = (-b)/(2 * a);
        printf("x1 = %lf", x1);
    }
    
    if (d < 0) {
        printf("Корней нет");
    }
}
