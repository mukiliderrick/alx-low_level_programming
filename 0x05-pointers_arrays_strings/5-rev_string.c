#include "main.h"

/**
 * rev_string - prints the string in reveres
 * @s: string to be printed
 */
void rev_string(char *s)
{
    char rev;
    int i, l,l2;
    l = 0;
    l2 = 0;

    while (s[l] != '\0')
    {
        l++;
    }
    l2 = l-1;

    for (i=0; i < l/2; i++)
    {
        rev = s[i];
        s[i] = s[l2];
        s[l2--] = rev;
    }

}