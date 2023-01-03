#include <stdio.h>

/**
 * fizz_buzz - plays the fizz buzz game up to some number
 * @limit: the number mentioned above
 *
 * Return: void
 */

void fizz_buzz(int limit)
{
	int n;

	n = 1;
	while (n <= limit)
	{
		if ((n % 3 == 0) && (n % 15 != 0))
			printf("fizz");
		else if ((n % 5 == 0) && (n % 15 != 0))
			printf("buzz");
		else if (n % 15 == 0)
			printf("fizzbuzz");
		else
			printf("%d", n);
		if (n < limit)
			printf(" ");
		n++;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void);
{
	fizz_buzz(100);
	return (0);
}
