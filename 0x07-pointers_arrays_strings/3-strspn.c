#include <stdio.h>

/**
 * _strspn - counts the number of characters present in both s and
 * accept up to the first difference
 *
 * @s: the first string
 * @accept: the reference string
 * Return: the number of similar characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int count;

	count = 0;
	while (*(accept + b) != '\0')
	{
		a = 0;
		while (*(s + a) != ' ')
		{
			if (*(s + a) == *(accept + b))
			{
				count++;
			}
		a++;
		}
	b++;
	}
	return (count);
}
