#include "main.h"

/**
 * print_rev - prints a string in reverse order of its chars
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	for (i--; i >= 0; i--;)
		_putchar(s[i]);
	_putchar('\n');
}
