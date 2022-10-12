#include "function_pointers.h"

/**
 * print_name - prints a name to the screen
 * @name: variable name
 * @f: pointer to the function
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	char[] n;
	if (f != NULL && name != NULL)
		(*f)(name);
}
