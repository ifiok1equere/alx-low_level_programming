#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function reverses a linked list
 * @head: pointer to the head node of the list
 *
 * Return: return a pointer to the head node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *p;

	ptr = *head;
	p = NULL;
	while (ptr != NULL)
	{

		*head = (*head)->next;
		*ptr = ptr->next;
	}
	return (*head);
}
