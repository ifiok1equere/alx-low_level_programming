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
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	return (n);
}
