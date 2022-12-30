#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	counter = 1;
	while (counter <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	counter++;
	}
}
