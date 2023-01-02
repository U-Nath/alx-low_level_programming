#include "main.h"

/**
 * print_most_numbers - prints numbers other than 4, 2
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		if (num != '2' && num != '4')
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
