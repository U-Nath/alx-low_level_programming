#include <stdio.h>

/**
 * _islower - checks whether the letters are lower case
 * @c: the character under test
 * Return: 1 if lower case, 0 if else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
