#include <stdio.h>

/**
 * _islower - checks whether the letters are lower case
 * @c: the character under test
 * Return: 1 if lower case, 0 if else.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
