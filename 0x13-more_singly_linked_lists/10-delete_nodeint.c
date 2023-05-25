#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function returns the nth node of a linked list.
 * @head: pointer to the head node of the list to be deleted.
 * @index: the index of the node to be deleted.
 * Return: pointer to the new node at index index after insertion.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = *head;
	while (i < idx - 2)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != idx - 2)
	{
		return (NULL);
	}
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
	new_node->next = ptr->next->next;
	ptr->next = new_node;
	return (ptr->next);
}
