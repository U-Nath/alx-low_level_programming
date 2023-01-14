#include <stdio.h>

/**
 * _strchr - find a certain char and resetting the string to start
 * from that char
 *
 * @s: the given string
 * @c: the required character
 * Return: NULL if the character is not found
 * if it is found, the function returns the reset string
 */

char *_strchr(char *s, char c)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
		{
			s = s + count;
			return (s);
		}
		count++;
	}
	return (NULL);
}
