#include "main.h"

/**
 * preliminary - scans for a sqrt of the number
 *
 * @n: the given number
 * @i: the possible sqrt of the number
 *
 * Return: i if exists, otherwise -1
 */
int preliminary(int i, int n)
{
	if (i * i < n)
		return (preliminary(i + 1, n));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds the natural sqrt of a number
 *
 * @n: the given number
 * Return: the sqrt of the number
 * if n < 0 or if not a perfect square, return -1
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	else
		return (preliminary(i, n));
}
