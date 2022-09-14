#include "main.h"
#include <ctype.h>

/**
 *_islower - entry point
 *
 * @c: check character
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
