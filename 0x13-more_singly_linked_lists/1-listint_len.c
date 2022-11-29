#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *listint_len - print element count function
  *@h: node
  *Return: unsigned integer
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->next == NULL)
		{
			return (count + 1);
		}
		else
		{
			h = h->next;
		}

		count++;
	}

	return (count);
}
