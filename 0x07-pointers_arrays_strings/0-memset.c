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

	count = 0;
	for (count <= 0)
	{
		*(s + count) = b;
		count++;
	}
	return (*s);
}
