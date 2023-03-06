#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 *
 * @s: pointer to string s.
 * @accept: pointer to string accept.
 *
 * Return: pointer to byte in s that is a match.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
