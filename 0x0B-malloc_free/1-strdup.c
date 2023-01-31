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

	i = 0;
	while (str[i])
		i++;
	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
		array[j] = str[j];

	return (array);
	free(array);
}
