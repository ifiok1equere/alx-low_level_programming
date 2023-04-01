#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - function fress a list
 * @head: pointer to head pointer to type list_t to head node of linked list
 *
 * Return: unsigned int (number of nodes)
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	{
		return;
	}
	ptr = head;
	while (head != NULL)
	{
		head = head->next;
		free(ptr->str);
		ptr->len = 0;
		free(ptr);
		ptr = head;
	}
}
