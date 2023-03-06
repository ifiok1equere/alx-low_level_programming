#include "main.h"
#include <stddef.h>

/**
 * _strchr - function locates a character in string.
 *
 * @s: pointer to string in which charcter search is to be made.
 * @c: character to be searched for.
 *
 * Return: pointer to first occurence of c in the string s or null is c is not
 * found.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0';)

	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
