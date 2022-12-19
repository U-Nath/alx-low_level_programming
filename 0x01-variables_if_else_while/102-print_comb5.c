#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description 'prints all possible 2 digit combinations'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numberi;
	int digit1;
	int digit2;

	int numberj;
	int digit_1;
	int digit_2;

	numberi = 0;
	while (numberi <= 98)
	{
		digit1 = (numberi / 10 + '0');
		digit2 = (numberi % 10 + '0');
		numberj = 0;
		while (numberj <= 99)
		{
			digit_1 = (numberj / 10 + '0');
			digit_2 = (numberj % 10 + '0');

			if (numberi < numberj)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(' ');
				putchar(digit_1);
				putchar(digit_2);
				if (numberi <= 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numberj++;
		}
		numberi++;
	}
	putchar('\n');
	return (0);
}
