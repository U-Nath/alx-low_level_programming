#include "main.h"
#include <stdlib.h>

/**
 * str_concat - duplicates the string
 *
 * @str1: the string to be duplicated
 * @str2: the string to be duplicated
 * Return: the copy of the string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *array;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	
	array = malloc(sizeof(char) * (i + j) + 1);
	if (array == NULL)
		return (NULL);
	j = 0;

	while (k < (i + j))
	{
		if (k <= i)
			array[k] = s1[k];
		if (k >= i)
		{
			array[k] = s2[j];
			j++;
		}
	}
	array[k] = '\0';
	return (array);
}
