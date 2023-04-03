#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function prints all elemnts of a linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}

	ptr = NULL;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		i++;
	}
	return (i);
}
