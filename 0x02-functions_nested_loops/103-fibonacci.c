#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

void fibonacci2(void)
{
	long n;
	long a_x;
	long a_y;

	a_x = 1;
	a_y = 2;
	while (a_y <= 4000000)
	{
		if ((a_x % 2) == 0)
			n += a_x;
		a_y = a_x + a_y;
		a_x = a_y - a_x;
	}
	printf("%ld\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci2();
	return (0);
}
