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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
