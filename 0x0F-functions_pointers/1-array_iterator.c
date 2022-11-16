#include "function_pointers.h"
#include <stddef.h>

/**
  *array_iterator - array print function
  *@array: array parameter
  *@size: number of elements in array
  *@action: function pointer to function that prints array items
  *Return: returns -1
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
