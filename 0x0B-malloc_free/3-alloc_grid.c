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
	int **ptr, i = 0, j = 0, k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i])
		{
			while (j < width)
			{
				ptr[i][j] = 0;
				j++;
			}
			j = 0;
		}
		else
		{
			while (k <= i)
			{
				free(ptr[k]);
				ptr[k] = NULL;
				k++;
			}
			free(ptr);
			ptr = NULL;
			return (ptr);

		}
		i++;
	}
	return (ptr);
}
