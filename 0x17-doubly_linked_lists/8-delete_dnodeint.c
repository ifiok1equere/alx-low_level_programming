#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts a new node @ a position
 * @head: head pointer to the head node
 * @index: position where node is to be inserted
 * Return: address of the new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
		return (delete_dnodeint_at_index_0(head));
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (index >= count)
		return (-1);
	ptr = *head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		ptr->prev->next = NULL;
		ptr->prev = NULL;
		free(ptr);
		return (1);
	}
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
/**
 * delete_dnodeint_at_index_0 - deletes a zeroth index node
 * @head: pointer to head node
 * Return: 1 for success and 0 for failure
 */
int delete_dnodeint_at_index_0(dlistint_t **head)
{
	dlistint_t *ptr = *head;

	if ((*head)->prev == NULL && (*head)->next ==  NULL)
	{
		*head = NULL;
		free(ptr);
		return (1);
	}
	else
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
}
