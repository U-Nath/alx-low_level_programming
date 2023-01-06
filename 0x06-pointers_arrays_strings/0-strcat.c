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
	int scrcount = 0;
	char *whole;

	while (*(dest + count) != '\0')
	{
		*(whole + count) = *(dest + count);
		count++;
	}
	while (*(scr + scrcount) != '\0')
	{
		*(whole + count) = *(scr + scrcount);
		scrcount++;
		count++;
	}
	return (whole);
}
