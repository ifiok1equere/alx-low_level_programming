#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function adds a new node at the end of a list
 * @head: pointer to head pointer to type list_t to head node of linked list
 * @str: string to be stored in list element.
 *
 * Return: unsigned int (number of nodes)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	ptr = *head;
	while (ptr)
	{
		if (ptr->next == NULL)
		{
			ptr->next = new;
			break;
		}
		else
		{
			ptr = ptr->next;
			continue;
		}
	}
	return (*head);
}
