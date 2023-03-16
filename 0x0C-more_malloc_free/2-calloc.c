#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory for an array using malloc.
 * @nmemb: number of elements of the array.
 * @size: the size of the byte of each element.
 *
 * Return: a pointer to the allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc((nmemb * size));
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = '0' - '0';
		i++;
	}
	return ((void *)ptr);
}
