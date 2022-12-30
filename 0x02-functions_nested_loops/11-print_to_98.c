#include <stdio.h>

/**
 * print_to_98 - prints all numbers starting from a given number up to 98
 * @n: the given number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{	
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
}
