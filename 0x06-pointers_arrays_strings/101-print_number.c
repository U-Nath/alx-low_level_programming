#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)
	{
		n *= -1;
		t = n;
		_putchar('-');
	}
	t /= 10;
	if (t != 0)
		print_number(t);
	_putchar((unsigned int) n % 10 + '0');
}
