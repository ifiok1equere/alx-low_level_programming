#include "main.h"
#include <string.h>

/**
    *_memcpy - function fills memory with a constant byte
    *@dest: pointer to buffer array
    *@src: constant byte
    *@n: memory byte size factor
    *Return: returns a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
