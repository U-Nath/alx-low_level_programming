#include <unistd.h>


/**
 * _puthcar - writes the char c to the stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
