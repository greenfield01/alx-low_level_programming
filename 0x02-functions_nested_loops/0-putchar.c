#include "main.h"
#include <stdio.h>

/**
* Main: entry - point
*
* Description: prints _putchar
*
* Return: always 0
*/
int main(void)
{
	int  i = 0;
	char c;
	char l[] = "_putchar\n";

	while (i <= 8)
	{
		c = l[i];
		_putchar(c);
		i++;
	}

	return (0);
}
