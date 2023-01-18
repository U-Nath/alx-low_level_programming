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
	int a, b, i;
	unsigned int count;

	count = 0;
	a = 0;
	while (*(s + a) != '\0')
	{
		b = 0;
		while (*(accept + b) != '\0')
		{
			i = 0;
			if (*(s + a) == *(accept + b))
			{
				i++;
				break;
			}
			b++;
		}
		a++;
		if (i != 0)
			break;
		count++;
	}
	s = (s + count);
	return (s);
}
