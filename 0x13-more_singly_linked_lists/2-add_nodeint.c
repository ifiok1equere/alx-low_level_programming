#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_nodeint - adds a new node to the first node
  *@head: head pointer to the first node
  *@n: int element
  * Return: returns a pointer of type list_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->next = *head;
		new_node->n = n;
		
		*head = new_node;

		return (*head);
	}
	else
	{
		return (NULL);
	}
}
