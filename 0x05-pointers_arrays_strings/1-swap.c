#include <stdio.h>

/**
 * swap_int - swaps the values of two variables
 * @a: the first variable
 * @b: the second variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	c = *a;
}
