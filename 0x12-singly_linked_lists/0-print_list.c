#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all the elements of a linked list
 * @h: pointer of type list_t to head node of linked list
 *
 * Return: unsigned int (number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (1);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
