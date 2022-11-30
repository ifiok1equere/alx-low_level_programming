#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node - adds a new node to the first node
  *@head: head pointer to the first node
  *@str: string element
  * Return: returns a pointer of type list_t
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;

	if (ptr->next == NULL)
	{
		return (ptr->n);
	}
	else
	{
		*head = ptr->next;
		n = ptr->n;
		free(ptr);
	}

	return (n);
}
