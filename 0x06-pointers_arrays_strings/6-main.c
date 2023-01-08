#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char str[] = "tatto,qemis,sinkua i don't want to use such \"time wasters\" do i?i really used many such{set of crazy}in my journey!dedeboch!\n";
	        char *ptr;

		    ptr = cap_string(str);
		        printf("%s", ptr);
			    printf("%s", str);
			        return (0);
}
