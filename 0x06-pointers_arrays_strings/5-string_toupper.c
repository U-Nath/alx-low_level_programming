#include "main.h"

/**
 * string_toupper - rewrites a string in uppercase
 *
 * @str: the string to be manipulated
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) >= 97 && *(str + count) <= 122)
			*(str + count) -= 32;
		count++;
	}
	return (str);
}
