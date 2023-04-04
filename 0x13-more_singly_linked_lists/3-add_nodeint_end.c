#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function appends a node to a linked list
 * @head: pointer to the head node of the list
 * @n: data part of the node to be added
 *
 * Return: the number of elements.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		new_node->n = n;
		new_node->next = NULL;
		ptr->next = new_node;
	}
	return (*head);
}
