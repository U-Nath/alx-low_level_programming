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

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar(10);
	return (0);
}
