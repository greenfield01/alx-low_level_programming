#include "main.h"
/**
 * _puts - outpt a string, followed by a new line,
 * @str: point the string to print
 * Return: void
*/


void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
