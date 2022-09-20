#include "main.h"
/**
 * swap_int - function swaps the value of a to b
 * @a: pointer to the 1st value
 * @b: pointers to the 2nd value
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}