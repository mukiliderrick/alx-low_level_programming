#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: strings to be printed
 */
void print_rev(char *s)
{
    int len,i ,j;
    i = 0;

    while(s[i] != '\0')

    {
        i++;
    }
    len = i;

    for (j = len - 1; j >= 0; j--)
    {
        _putchar(s[j]);
    }
    _putchar('\n');
}
