#include "main.h"

/**
 * cap_string - capitalize each word in the string
 * @str: thr given string
 *
 * Return: thr capitalized string
 */

char *cap_string(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) >= 97 && *(str + count) <= 122)
		{
			if (*(str + count - 1) == ' ' || *(str + count - 1) == '\n')
				*(str + count) -= 32;
			if (*(str + count - 1) == '\t' || *(str + count - 1) == '.')
				*(str + count) -= 32;
			if (*(str + count - 1) == ',' || *(str + count - 1) == ';')
				*(str + count) -= 32;
			if (*(str + count - 1) == '!' || *(str + count - 1) == '?')
				*(str + count) -= 32;
			if (*(str + count - 1) == '{' || *(str + count - 1) == '}')
				*(str + count) -= 32;
			if (*(str + count - 1) == '(' || *(str + count - 1) == ')')
				*(str + count) -= 32;
			if (*(str + count - 1) == '"')
				*(str + count) -= 32;
		}
		count++;
	}
	return (str);
}
