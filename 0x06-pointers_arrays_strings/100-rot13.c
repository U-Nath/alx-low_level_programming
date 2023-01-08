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
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (*(str + a) != '\0')
	{
		b = 0;
		while (*(upper + b) != '\0')
		{
			if (str[a] == original[b])
				str[a] = rot[b];
			b++;
		}
		a++;
	}
	return (str);
}
