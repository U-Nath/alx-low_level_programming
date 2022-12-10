#include <stdio.h>

/**
 * main - Entry point
 *
 * Description 'Lists the base 10 digits'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
