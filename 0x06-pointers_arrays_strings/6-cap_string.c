#include "main.h"
#include <string.h>

/**
 * cap_string - function capitalizes all words of a string.
 *
 * @c: this is a pointer to the string.
 *
 * Return: a pointer of type char to the resulting capitalized string.
 */

char *cap_string(char *c)
{
	char s[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j, k = 0, l = 0;

	j = strlen(c);
	while (s[k])
	{
		k++;
	}
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;

	while (l < k)
	{
		while (i < j)
		{
			if (c[i] == s[l])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] -= 32;
				}
			}
			else
			{
				i++;
				continue;
			}
			i++;
		}
		i = 0;
		l++;
	}

	return (c);
}
