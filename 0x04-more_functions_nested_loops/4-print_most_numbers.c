#include 'main.h'

/**
 * print_most_numbers - prints most number from 0 - 9
 * exccept 2 and 4
 */
void print_most_numbers(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i != 2 && != 4)
        {
            _putchar(i + 0);
        }
        
    }
    _putchar('\n')
}