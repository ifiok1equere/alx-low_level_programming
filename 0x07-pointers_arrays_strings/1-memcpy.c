#include "main.h"
#include <string.h>

/**
    *_memset - function fills memory with a constant byte
    *@s: pointer to buffer array
    *@b: constant byte
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
