#include "main.h"

/**
 * 
 * 
 * 
 */
void print_rev(char *s)
{
    int len, i;
    len = strlen(s);
    for (i = len; i>= 0; i--)
    {
        printf("%c", *(s+i));
    }
}
