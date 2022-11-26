#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_list - print element function
  *@h: node
  *Return: unsigned integer
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	ptr = h;

	while(ptr != NULL)
	{
		count++;
		if(ptr->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		
		ptr = ptr->next;
	}

	return (count);
}
