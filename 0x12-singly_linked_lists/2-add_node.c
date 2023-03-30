#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function adds a new node at the beginning of a list
 * @head: pointer to head pointer to type list_t to head node of linked list
 * @str: string to be stored in list element.
 *
 * Return: unsigned int (number of nodes)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (*head);
}
