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
	unsigned int i = 0, j = 0, k;

	k = strlen(needle);



	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j] && j < k)
		{
			j++;
			if (j == k - 1)
				return (&haystack[i - (k - 2)]);
		}
		i++;
	}
	return (haystack);
}
