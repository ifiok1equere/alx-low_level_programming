#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function prepends a node to a linked list
 * @h: pointer to the head node of the list
 * @n: data part of the node to be added
 *
 * Return: the number of elements.
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*h = new_node;
		return (*h);
	}
	else
	{
		new_node->n = n;
		new_node->next = *h;
		*h = new_node;
	}
	return (*h);
}
