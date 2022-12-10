#include <stdio.h>

/**
 * main - Entry point
 *
 * Description 'Lists the letters of the alphabet'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int letter;

	letter = 122;
	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	printf("\n");
	return (0);
}
