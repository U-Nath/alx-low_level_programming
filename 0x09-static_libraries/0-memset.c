#include <stdio.h>

/**
 * _memset - sets the buffer to some value
 * @s: the buffer to be adjusted
 * @b: the character which will fill the memory
 * @n: the number of bytes consumed
 * Return: the adjusted buffer
 */

char *_memset(char *s, char b, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
