#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of the list
  *@head: head pointer to the first node
  *@n: int element
  * Return: returns a pointer of type listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	ptr = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	if (ptr == NULL)
	{
		ptr = new_node;
		*head = ptr;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
	}

	return (*head);
}
