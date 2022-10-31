#include "lists.h"

/**
 * listint_len - returns the number in the linked list
 * @h: pointer to the list
 *
 * Return: the number of elements counted
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
