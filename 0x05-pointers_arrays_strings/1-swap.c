#include "main.h"
/**
 * swap_int - function swaps the value of a to b
 * @pointer to the 1st value
 * @pointers to the 2nd value
 */
void swap_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *b = *a;
    *a = temp;
}