#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the given number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (ld);
}
