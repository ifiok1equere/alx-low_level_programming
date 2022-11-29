#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_listint - print element function
  *@h: node
  *Return: unsigned integer
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;

	}

	return (count);
}
