#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 *
 * Retrun: void
 */

void print_diagonal(int n)
{
	int n_f;
	int spaces;

	n_f = n;
	while (n_f > 0)
	{
		spaces = n;
		while (spaces > n_f)
		{
			_putchar(' ');
			spaces--;
		}
		_putchar('\\');
		if (n_f > 1)
			_putchar('\n');
		n_f--;
	}
	_putchar('\n');
}
