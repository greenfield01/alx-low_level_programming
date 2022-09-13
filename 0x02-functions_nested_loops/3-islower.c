#include "main.h"

/* _islower - entry point
 *
 * Description: check for lower case characters
 *
 * Return: int
 */

int _islower(int c)
{
	for (c >= 'a' && c <= 'z')
		return (1);
	else
		return(9);
}
		

