New.h
#include <stdlib.h>

double* m(double* m1, double* m2, int n, char f)

New.c
#include <stdio.h>
#include <stdlib.h>

// Функция для вычисления суммы, разности или произведения матриц
double* m(double* m1, double* m2, int n, char f) {
    double* rez = (double*)malloc(n * n * sizeof(double)); // Выделение памяти под массив-результат

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = i * n + j; // Номер текущего элемента в матрицах

            if (f == '+') {
                rez[num] = m1[num] + m2[num]; // Сложение
            } else if (f == '-') {
                rez[num] = m1[num] - m2[num]; // Вычитание
            } else if (f == '*') {
                rez[num] = m1[num] * m2[num]; // Умножение
            }
        }
    }

    return rez;
}
 

Основа
#include <stdio.h>
#include <stdlib.h>
#include "New.c" // Подключение файла с функцией m

int main() {
    int n;
    printf("Введите размерность матрицы: ");
    scanf("%d", &n);

    double* m1 = (double*)malloc(n * n * sizeof(double)); // Выделение памяти под первую матрицу
    double* m2 = (double*)malloc(n * n * sizeof(double)); // Выделение памяти под вторую матрицу

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
    scanf("%c", &f);

    double* M = m(m1, m2, n, f); // Вызов функции для вычисления результата

    for (int i = 0; i < n * n; i++) {
        printf("%lf ", M[i]);
    }

    free(m1);
    free(m2);
    free(M);

    return 0;
}
