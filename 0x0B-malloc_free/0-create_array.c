#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chararcters.
 * @size: the size of the array
 * @c: The character the array will be initialized to in memmory.
 *
 * Return: a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int i = 0;

    ptr = (char *)malloc(sizeof(char) * size);
    if (ptr == NULL || size == 0)
	    return (NULL);

    while (i < size)
    {
	    ptr[i] = c;
	    i++;
    }
    return (ptr);
}
