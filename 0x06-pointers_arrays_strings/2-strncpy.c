#include <string.h>
#include "main.h"

/**
 * _strncpy - copy string
 * @dest: first str
 * @src: second str
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
