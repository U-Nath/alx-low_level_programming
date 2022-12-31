#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

void fibonacci(void)
{
	int n;
	long a_x;
	long a_y;

	a_x = 1;
	a_y = 2;
	n = 1;
	while (n <= 25)
	{
		printf("%ld, %ld", a_x, a_y);
		a_x = a_x + a_y;
		a_y = a_x + a_y;
		if (n < 25)
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
	fibonacci();
	return (0);
}
