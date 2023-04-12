#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * @array: pointer to the first element in the search
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: the index where the value is located in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, firstHalf, secondHalf;

	if (array == NULL)
		return (-1);

	for (firstHalf = 0, secondHalf = size - 1; secondHalf >= firstHalf;)
	{
		printf("searching in array: ");

		for (index = firstHalf; index < secondHalf; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = firstHalf + (secondHalf - firstHalf) / 2;

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			secondHalf = index - 1;
		else
			firstHalf = index + 1;
	}

	return (-1);
}

