#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the mutlipilcation
 * 
 * @argc: size of the arguments
 * 
 * @argv: the vector to the string
 */

int main(int argc, char *argv[])
{
    int one, two, result;

    if (argc != 3)
    {
        puts("Error");
        return (1);
    }
    one = atoi(argv[1]);
    two = atoi(argv[2]);
    result = one * two;
    printf("%d\n", result);
    return(0);
}