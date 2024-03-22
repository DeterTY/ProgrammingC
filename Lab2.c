// Лабораторная работа №2. Задание:
// Объявить массив данных типа double размером 3 на 3. Ввести с консоли его
// значения, вывести на консоль сумму его элементов, расположенных на главной
// диагонали и сумму элементов, расположенных на побочной диагонали.
// Объявить массив данных типа int размером 2 на 2. Ввести с консоли его
// значения, вывести на консоль квадрат данной матрицы.

#include <stdio.h>

int main()
{
    int N1 = 3;
    double m1[N1][N1];
    int i, j;
    for (i = 0; i < N1; i++)
    {
        for (j = 0; j < N1; j++)
        {
            printf("m1[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m1[i][j]);
        }
    }

    for (i = 0; i < N1; i++)
    {
        for (j = 0; j < N1; j++)
        {
            printf("%lf  ", m1[i][j]);
        }
        printf("\n");
    }

    double SumGD, SumPD;
    for (i = 0; i < N1; i++) 
    {
        SumGD += m1[i][i];
        SumPD += m1[N1 - i - 1][i];
    }
    printf("Сумма элементов по главной диагонали = %lf\n", SumGD);
    printf("Сумма элементов по побочной диагонали = %lf\n", SumPD);

    int N2 = 2;
    double m2[N2][N2];
    for (i = 0; i < N2; i++)
    {
        for (j = 0; j < N2; j++)
        {
            printf("m2[%d][%d] = ", i + 1, j + 1);
            scanf("%lf", &m2[i][j]);
        }
    }

    for (i = 0; i < N2; i++)
    {
        for (j = 0; j < N2; j++)
        {
            printf("%lf  ", m2[i][j]);
        }
        printf("\n");
    }

    int KvadratM2[N2][N2];
    int k;
    for (i = 0; i < N2; i++)
    {
        for (j = 0; j < N2; j++)
        {
            KvadratM2[i][j] = 0;
            for (k = 0; k < N2; k++)
            {
                KvadratM2[i][j] += m2[i][k] * m2[k][j];
            }
            printf("%d ", KvadratM2[i][j]);
        }
         printf("\n");
    }
}
