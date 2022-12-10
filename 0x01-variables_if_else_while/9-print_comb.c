#include <stdio.h>

/**
 * main - Emtry point
 *
 * Description 'lists possible combinations of single digits'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(44);
			putchar(32);
		}
		number++;
	}

	putchar(10);
	return (0);
}
