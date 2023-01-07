#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: if equal, 0
 * If the value of the first is greater, 15
 * If the value of the second is greater, -15
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] > s2[count])
			return (15);
		else if (s1[count] < s2[count])
			return (-15);
		else
			count++;
	}
	return (0);
}	
