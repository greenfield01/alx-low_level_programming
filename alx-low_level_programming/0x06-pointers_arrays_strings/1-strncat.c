#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate with max n
 * @dest: first str
 * @src: second str
 * @n: limit
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
