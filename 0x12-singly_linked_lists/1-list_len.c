#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - function counts elements (i.e.nodes) of a linked list
 * @h: pointer of type list_t to head node of linked list
 *
 * Return: unsigned int (number of nodes)
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h != NULL)
		i = 1;

	while (h != NULL)
	{
		if (h->next != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
