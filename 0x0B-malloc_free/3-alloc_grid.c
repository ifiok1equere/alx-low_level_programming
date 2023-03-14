#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function returns a pointer to a 2d-array of integers.
 * @width: the number of columns of the 2d-array.
 * @height: the number of rows of the 2d-array.
 *
 * Return: a pointer to the resulting 2d-array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		while (j < width)
		{
			*ptr[i] = 0;
			j++;
		}
		i++;
	}
	if (ptr)
	{
		return (ptr);
	}
	else
	{
		i = 0;
		while (i < height)
		{
			free(ptr[i]);
			i++;
		}
		free(ptr);
		return (NULL);
	}
}
