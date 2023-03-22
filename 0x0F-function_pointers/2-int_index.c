#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes another funtion
 * @array: 1st parameter
 * @size: 2nd parameter
 * @action: 3rd parameter
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
