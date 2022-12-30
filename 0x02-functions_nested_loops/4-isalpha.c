#include <stdio.h>

/**
 * _isalpha - checks whether the letters are lower case
 * @c: the character under test
 * Return: 1 if alphabetic character, 0 if else.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
