New.h
#include <stdlib.h>

double *m(double *m1, double *m2, int n, char f)

New.c
#include <stdio.h>
#include <stdlib.h>

double *m(double *m1, double *m2, int n, char f) 
{
    double *m1m2 = (double*)malloc(n * n * sizeof(double));

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (f == '+') 
            {
                m1m2[i][j] = m1[i][j] + m2[i][j];
            } 
            else if (f == '-') 
            {
                m1m2[i][j] = m1[i][j] - m2[i][j];
            } 
            else if (f == '*') 
            {
                m1m2[i][j] = m1[i][j] * m2[i][j];
            }
        }
    }
    return m1m2;
}
 

Основа
#include <stdio.h>
#include <stdlib.h>
#include "New.h"

int main() {
    int n;
    printf("Введите размерность матрицы: ");
    scanf("%d", &n);

    double *m1 = (double*)malloc(n * n * sizeof(double));
    double *m2 = (double*)malloc(n * n * sizeof(double));

    printf("Введите элементы первой матрицы:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("m1[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m1[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf  ", m1[i][j]);
        }
        printf("\n");
    }

    printf("Введите элементы второй матрицы:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("m1[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m2[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf  ", m2[i][j]);
        }
        printf("\n");
    }

    char f;
    printf("Введите операцию (+, -, *): ");
    scanf(" %c", &f);

    double *M = m(m1, m2, n, f);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf  ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}







































#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int n;
    printf("Введите размерность матриц: ");
    scanf("%d", &n);
    double** m1;
    double** m2;
    m1 = (double**)malloc(n * sizeof(double*));
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("m1[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m1[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%lf ", m1[i][j]);
        }
        printf("\n");
    }
    m2 = (double**)malloc(n * sizeof(double*));
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("m2[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m1[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%lf ", m1[i][j]);
        }
        printf("\n");
    }
    char f;
    double* M;
    M = (double*)malloc(n * n * sizeof(double));
    printf("Введите операцию +, -, *: ");
    scanf(" %c", &f);
    if(f = '+')
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                
            }
            printf("\n");
        }
    }
    return 0;
}
