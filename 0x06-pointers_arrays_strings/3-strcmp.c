#include "main.h"
#include <string.h>

/**
 * _strcmp - function compares two strings and returns an integer depending on
 * the result of the comparison. 0 for when the two strings are equal, positive
 * integer value for when s1 > s2 and negative integer value for when s1 < s2.
 *
 * @s1: this is the pointer to the first string.
 * @s2: pointer to the 2nd string.
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 > len2)
	{
		return (len1 - len2);
	}
	else if (len1 < len2)
	{
		return (len1 - len2);
	}
	else
	{
		return (0);
	}

	return (0);
}
