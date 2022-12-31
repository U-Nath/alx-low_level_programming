#include <stdio.h>

/**
 * fibonacci3 - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

void fibonacci3(void)
{
	int n;
	unsigned long a_x;
	unsigned long a_y;

	a_x = 1;
	a_y = 2;
	n = 1;
	while (n <= 98)
	{
		printf("%lu", a_x);
		a_y = a_x + a_y;
		a_x = a_y - a_x;
		if (n < 98)
			printf(", ");
		n++;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci3();
	return (0);
}
