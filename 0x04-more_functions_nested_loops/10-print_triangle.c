#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle (length of legs)
 *
 * Return: void
 */

void print_triangle(int size)
{
	int size_l;
	int space;
	int hash;
	int space_f;
	int hash_f;

	size_l = size;
	space = size;
	hash = 0;
	while (size_l > 0)
	{
		space--;
		hash++;

		space_f = space;
		while (space_f > 0)
		{
			_putchar(' ');
			space_f--;
		}
		hash_f = hash;
		while (hash_f > 0)
		{
			_putchar('#');
			hash_f--;
		}
		if (size_l > 1)
			_putchar('\n');
		size_l--;
	}
	_putchar('\n');
}
