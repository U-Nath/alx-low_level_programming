#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @src: the first string
 * @dest: the appended string
 * @n: the maximum number of characters to be appended
 * Return: the resultant string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int srccount = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (*(src + srccount) != '\0' && srccount <= n - 1)
	{
		*(dest + count) = *(src + srccount);
		srccount++;
		count++;
	}
	return (dest);
}
