#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: 1st parameter
 * @size: 2nd parameter
 * @cmp: 3rd parameter
 *
 * Return:array index position of the integer searched for.
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
