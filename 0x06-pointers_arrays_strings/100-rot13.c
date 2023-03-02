#include "main.h"
#include <string.h>

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @c: this is a pointer to the string to be encoded.
 *
 * Return: a pointer of type char to the resulting encoded string.
 */

char *rot13(char *c)
{
	int i = 0;

	/*j = strlen(c);*/

	while (c[i])
	{
		while ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			if ((c[i] >= 65 && c[i] <= 77) || (c[i] >= 97 && c[i] <= 109))
			{
				c[i] +=  ('=' - '0');
			}
			else
			{
				c[i] -=  ('=' - '0');
			}
			break;
		}
		i++;
	}

	return (c);
}
