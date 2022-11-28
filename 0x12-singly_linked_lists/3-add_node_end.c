#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - adds a new node to the first node
  *@head: head pointer to the first node
  *@str: string element
  * Return: returns a pointer of type list_t
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;

	ptr = *head;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
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
