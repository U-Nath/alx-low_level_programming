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
	int number2;

	number = 48;
	while (number <= 57)
	{
		number2 = number + 1;
		while (number2 <= 57)
		{
			putchar (number);
			putchar (number2);
			if (number == 56 && number2 == 57)
				break;
			putchar(44);
			putchar(32);
			number2++;
		}
		number++;
	}

	putchar(10);
	return (0);
}
