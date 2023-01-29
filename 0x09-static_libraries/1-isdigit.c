#include <stdio.h>

/**
 * _isdigit - checks whether the chars are numeric
 * @c: the character under test
 * Return: 1 if lower case, 0 if else.
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
