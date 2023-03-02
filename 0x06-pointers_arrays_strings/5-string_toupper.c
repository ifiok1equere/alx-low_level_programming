#include "main.h"
#include <string.h>

/**
 * string_toupper - function changes all lowercase letters of a string to
 * uppercase.
 *
 * @c: this is a pointer to the string.
 *
 * Return: a pointer of type char to the resulting uppercase string.
 */

char *string_toupper(char *c)
{
	int j, i = 0;

	j = strlen(c);

	while (i < j)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			i++;
			continue;
		}
		else
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
		i++;
	}

	return (c);
}
