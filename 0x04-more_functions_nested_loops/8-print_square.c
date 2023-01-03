#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square (length of side)
 *
 * Return: void
 */

void print_square(int size)
{
	int size_w;
	int size_l;

	size_l = size;
	while (size_l > 0)
	{
		size_w = size;
		while (size_w > 0)
		{
			_putchar('#');
			size_w--;
		}
		if (size_l > 1)
			_putchar('\n');
		size_l--;
	}
	_putchar('\n');
}
