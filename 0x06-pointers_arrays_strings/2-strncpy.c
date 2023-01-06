#include <stdio.h>

/**
 * _strncpy - modifies the content of one string according to another
 * @src: the first string
 * @dest: the appended string
 * @n: the maximum number of characters to be appended
 * Return: the resultant string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (*(src + count) != '\0' && count <= n - 1)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	while (count > n)
	{
		*(dest + count) = '\0';
		count++;
	}
	return (dest);
}
