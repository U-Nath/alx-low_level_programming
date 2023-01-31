#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates the string
 *
 * @str: the string to be duplicated
 * Return: the copy of the string
 */

char *_strdup(char *str)
{
	int i;
	char *array;
	int j;

	if (str == NULL)
		return (NULL);
	i = 1;
	while (str[i])
		i++;

	array = malloc(sizeof(char) * i + 1);
	if (array == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		array[j] = str[j];

	array[j] = '\0';
	return (array);
}
