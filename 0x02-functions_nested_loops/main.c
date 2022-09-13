#include "main.h"

/**
 * main - prints _putchar followed by a new line
 * Return: always ) (Succes)
 */
int main(void)
{
    char *ch ="_putchar";

    while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
_putchar('\n');
return (0);
}