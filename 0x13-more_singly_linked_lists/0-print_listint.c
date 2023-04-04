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
	size_t i = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
