#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function deletes a head node of a list.
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return (n);
}
