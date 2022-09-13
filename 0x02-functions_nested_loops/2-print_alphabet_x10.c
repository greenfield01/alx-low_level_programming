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

	for (n = 1; n <= 10; n++)
	{
		char x;

		_putchar('\n');

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
}
