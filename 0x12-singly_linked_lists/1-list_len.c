#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *list_len - print element function
  *@h: node
  *Return: unsigned integer
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;


	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
