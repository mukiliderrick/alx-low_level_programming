#include "main.h"

/**
 * puts2 - prints the size of the string
 * @s: the string to be printed
 * 
 */
void puts2(char *str)
{
    int i ,size;
    size= 0;

    while(str[size] != '\0')
    {
        size++;
    }
    for (i = 0; i < size; i+=2)
    {
        _pitchar(str[i]);
    }
    _putchar('\n');
}