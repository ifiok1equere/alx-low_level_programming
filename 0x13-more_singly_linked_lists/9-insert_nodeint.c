#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function returns the nth node of a linked list.
 * @head: pointer to the head node of the list
 * @idx: the index of the node starting @ 0.
 * @n: data part of node to be inserted.
 * Return: pointer to the new node at index index after insertion.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
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
	new_node->next = ptr->next->next;
	ptr->next = new_node;
	return (ptr->next);
}
