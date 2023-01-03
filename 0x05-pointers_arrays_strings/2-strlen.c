#include <stdio.h>

/**
 * _strlen - states the length of a string
 *
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}
