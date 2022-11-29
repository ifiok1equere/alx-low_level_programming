#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *free_list - function to free list elements
  *@head: pointer to list.
  *Return: returns nothing
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		if (head->str)
			free(head->str);

		ptr = head;
		head = head->next;

		free(ptr);
	}
}
