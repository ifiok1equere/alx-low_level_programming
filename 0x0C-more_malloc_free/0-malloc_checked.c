#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: a pointer to the allocated memory \
 * on success(0 to the shell) or (98) to the shell on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
