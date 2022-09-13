#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: print alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n;
	char x;

	for (n = 1; n <= 10; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
