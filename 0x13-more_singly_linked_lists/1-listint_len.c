#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function returns the number of elements of a linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
