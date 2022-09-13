#include "main.h"
#include <stdio.h>

/**
 * code that prints _putchar
 * main: Entry point
 * return: always 0
 */

int main(void)
{

	int  i = 0;
	char c;
	char l[] = "_putchar\n"
	
	while (i <= 8)
	{
		c = l[i];
		_putchar(c);
		i++;
	}

	return (0);
}
