#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function returns the sum of all data in a linked list.
 * @head: pointer to the head node of the list
 *
 * Return: pointer to the head node.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
