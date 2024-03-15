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
    for (int i = 0; i < n * n; i++) {
        scanf("%lf", &m1[i]);
    }

    printf("Введите элементы второй матрицы:\n");
    for (int i = 0; i < n * n; i++) {
        scanf("%lf", &m2[i]);
    }

    char f;
    printf("Введите операцию (+, -, *): ");
    scanf(" %c", &f);

    double* resultMatrix = m(m1, m2, n, f); // Вызов функции для вычисления результата

    printf("Результат операции:\n");
    for (int i = 0; i < n * n; i++) {
        printf("%lf ", resultMatrix[i]);
    }

    free(m1);
    free(m2);
    free(resultMatrix);

    return 0;
}
