#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of a main function
 * @ac: the number of args
 * @av: the array of strings
 *
 * Return: the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, ch = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while(av[i])
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
}

	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		i++;
		k++;
	}
	s[k] = '\0';
	return (s);
}
