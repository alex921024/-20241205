#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[] = { -3, 6, 5, -1, 0, 9, 3 };
    int i, j, tmp;
    int n = sizeof(A) / sizeof(int);
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < 7; i++)
    {
        printf(" %d ", A[i]);
    }
}