#include "main.h"

/**
 * leet - rewrites in number form
 * @str: the given string
 *
 * Return: the enrypted string
 */

char *leet(char *str)
{
	int a, b;
	char *upper = "AEOTL";
	char *lower = "aeotl";
	char *number = "43071";

	a = 0;
	while (*(str + a) != '\0')
	{
		b = 0;
		while (*(upper + b) != '\0' || *(lower + b) != '\0')
		{
			if (str[a] == upper[b] || str[a] == lower[b])
				str[a] = number[b];
			b++;
		}
		a++;
	}
	return (str);
}
