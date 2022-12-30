#include <stdio.h>

/**
 * _abs - finds the absolute value of a number
 * @r: the number to be manipulated
 *
 * Return: the absolute value of the number
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
