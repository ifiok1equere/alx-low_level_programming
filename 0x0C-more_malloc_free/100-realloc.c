#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function reallocates a memory block using malloc and free.
 * @ptr: pointer to the existing memory allocated by malloc.
 * @old_size: size of the existing memory previously allocated.
 * @new_size: size of the new memory block to be reallocated.
 *
 * Return: a void pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0, j = 0;

	if(new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		while (i < old_size)
		{
			p[i] = *((char *)ptr + i);
			i++;
		}
		free(ptr);
	}
	else if (new_size < old_size)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		while (j < new_size)
		{
			p[j] = *((char *)ptr + j);
			j++;
		}
		free(ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL && new_size > 0)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
	}
	return ((void *)p);
}
