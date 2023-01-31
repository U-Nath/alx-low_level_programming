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
	
	array = malloc(sizeof(char) * i + 1);
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		array[k] = s1[k];
	while (k < j + i)
	{
		array[k] = s2[k];
		k++;
	}

	array[k] = '\0';
	return (array);
}
