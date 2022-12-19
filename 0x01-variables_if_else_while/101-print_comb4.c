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
	int number3;

	number = 48;
	while (number <= 57)
	{
		number2 = number + 1;
		while (number2 <= 57)
		{
			number3 = number2 + 1;
			while (number3 <= 57)
			{
				putchar (number);
				putchar (number2);
				putchar (number3);
				if (number == 55 && number2 == 56 && number3 == 57)
					break;
				putchar(44);
				putchar(32);
				number3++;
			}
			number2++;
		}
		number++;
	}

	putchar(10);
	return (0);
}
