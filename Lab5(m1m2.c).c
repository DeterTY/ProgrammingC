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
