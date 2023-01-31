#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array starting with an element
 * @size: the size of the array
 * @c: the first element of the array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	str = malloc(size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
