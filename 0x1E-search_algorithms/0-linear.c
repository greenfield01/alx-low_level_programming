#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return(-1);

	for(index = 0; index < size; index++)
	{
		printf("value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
