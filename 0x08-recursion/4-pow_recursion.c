#include "main.h"

/**
 * _pow_recursion - finds the yth power of x
 *
 * @x: the base
 * @y: the exponent
 * Return: the result in standard form
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
