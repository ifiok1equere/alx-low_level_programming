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
	int a;

	if (*head == NULL)
		return (0);

	a = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	if (*head != NULL)
	{
		free(ptr);
		ptr =  NULL;
		return (a);
	}
	else
	{
		return (0);
	}
}
