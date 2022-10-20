#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first and return string
 * @src: concatenated string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
