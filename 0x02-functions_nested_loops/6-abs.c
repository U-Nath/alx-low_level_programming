#include <stdio.h>

/**
 * _abs - finds the absolute value of a number
 * @r: the number to be manipulated
 *
 * return: Always 0
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
