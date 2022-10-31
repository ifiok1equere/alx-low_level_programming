#include "main.h"
#include <string.h>

/**
    *memset: function fills memory with a constant byte
    *@s: pointer to buffer array
    *@b: constant byte
    *@n: memory byte size factor
    *Return: returns a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
