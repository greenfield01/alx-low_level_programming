#include "main.h"

/**
 * string_toupper - to upper case
 * @x: change this string to upper
 * Return: return upper case x
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
