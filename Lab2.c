#include <stdio.h>

int main()
{
    double m[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &m[i][j]);
        }
    }
    double s1, s2;
    s1 = m[0][0] + m[1][1] + m[2][2];
    printf("Сумма элементов по главной диагонали = %lf\n", s1);
    s1 = m[0][2] + m[1][1] + m[2][0];
    printf("Сумма элементов по побочной диагонали = %lf\n", s1);

    int p[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &p[i][j]);
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
                kv[i][j] += p[i][k] * p[k][j];
                printf("%d ", kv[i][j]);
            }
        }
    }
}
