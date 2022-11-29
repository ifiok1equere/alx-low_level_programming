#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *free_listint2 - function to free list elements
  *@head: pointer to list.
  *Return: returns nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;

		free(ptr);
	}
}
