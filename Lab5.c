#Основа. main.c
    
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

# m1m2.h

double* f(double* m1, double* m2, int n, char math);

# m1m2.c

#include "m1m2.h"
#include <malloc.h>

double* f(double* m1, double* m2, int n, char math) 
{
    double* M = (double*)malloc(n * n * sizeof(double));

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if(math == '+') 
            {
                M[i * n + j] = m1[i * n + j] + m2[i * n + j];
            } 
            else if(math == '-') 
            {
                M[i * n + j] = m1[i * n + j] - m2[i * n + j];
            } 
            else if(math == '*') 
            {
                M[i * n + j] = m1[i * n + j] * m2[i * n + j];
            }
        }
    }

    return M;
}
