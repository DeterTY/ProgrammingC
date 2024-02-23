#include <stdio.h>

int main()
{
    double m1[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("m1[%d][%d] = ", i, j);
            scanf("%lf", &m1[i][j]);
        }
    }
    double s1, s2;
    s1 = m1[0][0] + m1[1][1] + m1[2][2];
    printf("Сумма элементов по главной диагонали = %lf\n", s1);
    s2 = m1[0][2] + m1[1][1] + m1[2][0];
    printf("Сумма элементов по побочной диагонали = %lf\n", s2);

    int m2[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("m2[%d][%d] = ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    int kv[2][2];
    int k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                kv[i][j] += m2[i][k] * m2[k][j];
                printf("%d ", kv[i][j]);
            }
        }
    }
}
