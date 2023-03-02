#include "main.h"
#include <string.h>

/**
 * _strncpy - function concatenates two strings
 *
 * @dest: this is the pointer to the destination string
 * @src: pointer to the source string
 * @n: the number of bytes from the source string src to be copied
 *
 * Return: Pointer to the resulting destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	m = strlen(dest);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n < m)
	{
		dest[n] = '\0';
		n++;
	}

	return (dest);
}
