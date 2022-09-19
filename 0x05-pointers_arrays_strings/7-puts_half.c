#include "main.h"
/**
 * 
 * 
 */
void puts_half(char *str)
{
    int size, n, i;
    while (str[size] != '\0')
    {
        size++;
    }
    if (size % 2 == 0)
    {
        for (i = size/2; str[i] != '0'; i++)
        {
            _putchar(str[i]);
        }
        } else if (size % 2)
        {
            for (n = (size -1)/2; n < size -1; n++)
            {
                _putchar(str[n + 1]);
            }
        }
        
    }
    _putchar('\n');
}