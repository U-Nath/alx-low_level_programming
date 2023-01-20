#include "main.h"

/**
 * _strpbrk - searches for a similat character between s and accept and
 * prints starting from the similar character
 * @s: the first string
 * @accept: the reference string
 * Return: the adjusted string
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a])
	{
		b = 0;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}
		a++;
	}
	return ('\0');
}
