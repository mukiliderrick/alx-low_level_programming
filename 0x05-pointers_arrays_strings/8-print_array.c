#include "main.h"

/**
 * print array - prints the number of elements if an array
 * @a: the first argument
 * n: the second argument
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(", %d", a[i]);
    }
    printf("\n");

}