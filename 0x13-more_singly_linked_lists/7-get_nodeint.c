#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of a linked list.
 * @head: pointer to the head node of the list
 * @index: the index of the node starting @ 0.
 *
 * Return: pointer to the node at index index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (ptr);
}
