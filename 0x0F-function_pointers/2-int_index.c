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

	/*if (size <= 0)
	{
		return (-1);
	}*/

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			printf("%d\n", cmp(array[i]));
		}
		else
		{
			i++;
		}
	}
	
	return (5);
}
