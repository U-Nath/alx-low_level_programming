#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the appended string
 * Return: the resultant string
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int srccount = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (*(src + srccount) != '\0')
	{
		*(dest + count) = *(src + srccount);
		srccount++;
		count++;
	}
	return (dest);
}
