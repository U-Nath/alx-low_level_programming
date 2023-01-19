#include <stdio.h>

/**
 * _strpbrk - searches for a similat character between s and accept and 
 * prints starting from the similar character
 * @s: the first string
 * @accept: the reference string
 * Return: the adjusted string
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ("\0");
}		
