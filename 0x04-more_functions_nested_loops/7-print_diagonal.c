#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 *
 * Retrun: void
 */

void print_diagonal(int n)
{
	int spaces;

	while (n > 0)
	{
		spaces = 10 - n;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
