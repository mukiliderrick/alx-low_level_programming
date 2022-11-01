#include "main.h"

/**
 * 
*/
void print_binary(unsigned long int n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}