#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description 'gives the last digit of a number and states
 * whether it is greater than 5, or zero, or neither'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	last = abs (n % 10);

	if (last > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("The last digit of %d is %d and is 0\n", n, last);
	else
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
