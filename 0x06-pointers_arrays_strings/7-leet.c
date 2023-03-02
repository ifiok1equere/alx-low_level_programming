#include "main.h"
#include <string.h>

/**
 * leet - function that encodes a string into 1337.
 *
 * @c: this is a pointer to the string to be encoded.
 *
 * Return: a pointer of type char to the resulting encoded string.
 */

char *leet(char *c)
{
	int i = 0, j = 0, k, l = 0, m = 0;
	int s[] = {4, 3, 0, 7, 1};
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	j = strlen(c);
	k = sizeof(str) / sizeof(str[0]);

	while (i < j)
	{
		while (l < k)
		{
			if (c[i] == str[l] || c[i] == str[l + 1])
			{
				c[i] = s[m] + '0';
			}
			else
			{
				l += 2;
				m++;
				continue;
			}
			m++;
			l += 2;
		}
		m = 0;
		l = 0;
		i++;
	}

	return (c);
}
