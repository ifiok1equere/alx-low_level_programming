#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node - adds a new node to the first node
  *@head: head pointer to the first node
  *@str: string element
  * Return: returns a pointer of type list_t
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = strlen(str);

		*head = new_node;

		return (*head);
	}
	else
	{
		return (NULL);
	}
}
