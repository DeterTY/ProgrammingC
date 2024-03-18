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
