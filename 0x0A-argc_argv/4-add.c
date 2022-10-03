#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result of the mutlipilcation
 * 
 * @argc: size of the arguments
 * 
 * @argv: the vector to the string
 */
int main(int argc, char *argv[])
{
    int a =0, one, two;

    for (one = 0; one < argc; one++)
    {
        for (two = 0; argv[one][two]; two++)
        {
            if (isdigit(argv[one][two]) == 0)
            {
                puts("Error");
                return (1);
            }
        }
    }
    for (one = 1; one < argc; one++)
    {
        a += atoi(argv[one]);
    }
    printf("%d\n",a);
    return(0);
}