#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int s = 0, c = 0;
	time_t t;

	while (c < 2772)
	{
		s = rand() % 128;
		if ((c + s) > 2772)
			break;
		c = c + s;
		printf("%c", s);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
