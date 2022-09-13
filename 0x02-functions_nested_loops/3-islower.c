#include "main.h"

/**
 *_islower - entry point
 *
 * @c: check character
 *
 * Return: int
 */

int _islower(int c)
{
	for (c >= 'a' && c <= 'z')
		return (1);
	else
		return (9);
}
