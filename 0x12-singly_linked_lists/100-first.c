#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*calledFirst - prints a sentence before the main.
*/
void __attribute__((constructor)) calledFirst();
void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
