#include "main.h"
/**
 * _strcy - copies the string pointed
 * @dest: pointer to the buffer inwhich we copy the string
 *@src: string to be copied
 */
char *_strcpy(char *dest, char *src)
{
    int len, i;
    len = 0;

    while (srce[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '0';

    return (dest);
}