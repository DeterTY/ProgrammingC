// Лабораторная работа №5. Задание:
// Разместить в динамической памяти 2 массива – 2 матрицы размерностью n на n с
// элементами типа double (значения n и элементы массивов ввести с консоли). А также
// ввести с консоли знак операции: '+', '-' или '*'. Написать функцию, вычисляющую
// сумму, разность или произведение данных матриц (их передать по указателю) и
// возвращающую указатель на массив-результат. Разместить эту функцию в отдельном
// модуле (отличном от того, где располагается функция main()). Выдать на консоль
// значения полученного вектора.
    
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "m1m2.h"

int main() {
    int n;
    printf("Введите размерность матриц: ");
    scanf("%d", &n);

    double* m1 = (double*)malloc(n * n * sizeof(double));
    double* m2 = (double*)malloc(n * n * sizeof(double));

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("m1[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m1[i * n + j]);
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("%lf ", m1[i * n + j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("m2[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m2[i * n + j]);
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("%lf ", m2[i * n + j]);
        }
        printf("\n");
    }

    char math;
    printf("Введите операцию +, -, *: ");
    scanf(" %c", &math);

    double* M = f(m1, m2, n, math);

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("%lf ", M[i * n + j]);
        }
        printf("\n");
    }

    free(m1);
    free(m2);
    free(M);

    return 0;
}
