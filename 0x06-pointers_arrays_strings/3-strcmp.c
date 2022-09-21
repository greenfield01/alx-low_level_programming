#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{
	s1 = "lastname";
	s2 = "firstname";

	printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));

	return 0;
}
