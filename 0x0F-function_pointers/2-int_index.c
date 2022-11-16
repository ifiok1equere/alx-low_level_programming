#include "function_pointers.h"
#include <stdio.h>

/**
  *int_index - search function
  *@array: pointer to array
  *@size: size of array parameter
  *@cmp: function pointer to print function
  *Return: 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
