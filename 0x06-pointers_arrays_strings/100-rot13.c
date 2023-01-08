#include "main.h"

/**
 * rot13 - rewrites in number form
 * @str: the given string
 *
 * Return: the enrypted string
 */

char *rot13(char *str)
{
	int a, b;
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (*(str + a) != '\0')
	{
		b = 0;
		while (*(original + b) != '\0')
		{
			if (str[a] == original[b])
			{
				str[a] = rot[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (str);
}
