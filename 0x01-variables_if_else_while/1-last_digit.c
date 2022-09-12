#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
main - prints the random number
return: returns a non zero(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int l = n % 10;
    printf( "last digit of %d is %d",n,l);
	if (l% 10 > 5)
    {
        printf("%d and is greater than 5",n);
    }else if (l == 0)
    {
        printf("%d and is 0",l);
    }else if (l < 6 && n != 0)
    {
        printf("%d and is less than 6",l);
    }
	return (0);
}