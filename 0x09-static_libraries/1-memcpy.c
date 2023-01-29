#include <stdio.h>

/**
 * _memcpy - adjusts only some elements
 * @dest: the destination file
 * @src: the source file
 * @n: the number of bytes copied
 * Return: the adjusted memory
 */

char *_memcpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
