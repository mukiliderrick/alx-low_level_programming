#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
main - prints the random number
return: returns a non zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    l = n % 10
	if (l > 5)
    {
        printf("%d and is greater than 5",l);
    }else if (l == 0)
    {
        printf("%d and is 0",l);
    }else if (l < 6 && n != 0)
    {
        printf("%d and is less than 6",l);
    }
	return (0);
}