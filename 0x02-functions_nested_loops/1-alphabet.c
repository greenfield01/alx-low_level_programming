#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: code to write out all alphabets and new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar(\n);
}
