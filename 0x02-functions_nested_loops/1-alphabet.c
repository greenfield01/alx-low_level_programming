#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: code to write out all alphabets and new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
