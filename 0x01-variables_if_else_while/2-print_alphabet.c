#include<stdio.h>

/**
* main - prints the lower case of the alphabets,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
    int i;
    for(i = 0; i <= 10; i++)
    {
        char ch;
        for (ch = 'a'; ch<= 'z'; ch++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
    return (0);
}