#include <stdio.h>

/**
 * main - number of arguments passed to it
 * 
 * @argc: size of the array and the nummber of command line arguments
 * 
 * @argv: an array of size argc
 * 
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;
    for (i=0; i<argc ; i++)
    
    printf(" %d", i);

    return 0;
}