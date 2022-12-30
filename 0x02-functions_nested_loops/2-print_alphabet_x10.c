#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: none
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	counter = 1;
	while (counter <=10)
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
