#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * 
*/
void __attribute__((constructor)) calledFirst();

void calledFirst()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}