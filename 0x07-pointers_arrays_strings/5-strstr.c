#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - function locates a substring.
 *
 * @haystack: pointer to string haystack.
 * @needle: pointer to the needle string.
 *
 * Return: pointer to substring in haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
			return (&haystack[i]);
	}
	return (NULL);
}
