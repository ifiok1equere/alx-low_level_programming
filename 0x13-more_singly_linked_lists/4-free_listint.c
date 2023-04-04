#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function frees a list
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		head = NULL;
		return;
	}
	ptr = head;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
