#include <stdio.h>

/**
 * main - prints all argumentd it receives.
 * 
 * @argc: size f the argv and number of command line arguments
 * 
 * @argv: An array of size argc
 * 
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;
    for(i=0; i<argc; i++)
    {
    printf("%s\n",argv[i]);
    }
    return (0);
}