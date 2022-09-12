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
    
    printf( "last digit of %d is %d",n,n%10);
	if (n % 10 > 5)
    {
        printf("and is greater than 5");
    }else if (n % 10 == 0)
    {
        printf("and is 0");
    }else if (n %10 < 6 && n %10 != 0)
    {
        printf("and is less than 6");
    }
	return (0);
}