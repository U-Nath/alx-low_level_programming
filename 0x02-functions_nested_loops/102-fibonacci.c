#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

void fibonacci(void)
{
	int a_1;
	int a_2;
	int n;
	int a_x;
	int a_y;

	a_1 = 1;
	a_2 = 2;
	n = 1;

	a_x = a_1;
	a_y = a_2;
	while (n <= 25)
	{
		printf("%d, %d", a_x, a_y);
		a_x = a_x + a_y;
		a_y = a_y + a_x;
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
