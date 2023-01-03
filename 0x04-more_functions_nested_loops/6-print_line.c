#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
