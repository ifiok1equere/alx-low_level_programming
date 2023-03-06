#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - function gets the length of a prefix sub-string.
 *
 * @s: pointer to string s.
 * @accept: pointer to string accept.
 *
 * Return: integer representing the no of bytes found.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
			{
				k++;
			}
		}
	}
	return (k);
}
