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
	int i = 0, l = 0;
	char *array;
	int j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	array = malloc((sizeof(char) * l) + 1);
	if (array == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			array[k] = s1[k];
		if (k >= i)
		{
			array[k] = s2[j];
			j++;
		}
		k++;
	}
	array[k] = '\0';
	return (array);
}
