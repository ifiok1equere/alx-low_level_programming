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
	/*list_t *p;*/

	ptr = head;

	if (ptr == NULL)
	{
		return;
	}
	else
	{
		while (ptr != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
	}
		

	free(head);
	head = NULL;
	
	return;
}
