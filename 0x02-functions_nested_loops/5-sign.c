#include "main.h"
#include <limits.h>

/**
 * print_sign - entry point
 * @n: n's value
 * Return: 9 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{	_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
