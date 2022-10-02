#include "main.h"
#include <studio.h>
/**
 * main - Prints name of the program
 * 
 * @argc: size of the argv array and number of command line arguments
 * 
 * @argv: An array of size argc
 * 
 * Return: 0
 */

int main(int argc __attribute((unused)), char *argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}