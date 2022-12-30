#include <stdio.h>

/**
 * modify_my_char_var - Solve me
 *
 * Return: Nothing.
 */

void modify_my_char_var(char *cc, char ccc)
{
	printf("value of *cc is %p\n", cc);
	printf("address of *cc is %p\n", &cc);
	printf("value of ccc is %d\n", ccc);
	printf("address of ccc is %p\n", &ccc);
	*cc = 'o';
	printf("value of ccc is %d\n", ccc);
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: 0 if success.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("the address of p before is %p\n", &p);
	printf("the value of c before is %d\n", c);
	printf("the address of c before is %p\n", &c);
	modify_my_char_var(p,c);
	printf("the address of p is %p\n", &p);
	printf("the value of c is %d\n", c);
	printf("the address of c is %p\n", &c);
	return (0);
}
