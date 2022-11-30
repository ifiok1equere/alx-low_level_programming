#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *pop_listint - adds a new node to the first node
  *@head: head pointer to the first node
  *Return: returns a pointer of type list_t
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);

	*head = ptr;

	return (n);
}
