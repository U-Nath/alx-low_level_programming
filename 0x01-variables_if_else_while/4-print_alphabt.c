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

	letter = 96;
	while (letter <= 121)
	{
		letter++;
		if ((letter == 113) || (letter == 101))
			continue;

		else
			putchar(letter);
	}
	printf("\n");
	return (0);
}
