#include "main.h"
#include <string.h>

/**
  *_strpbrk - string search
  *@s: param 1
  *@accept: prame 2
  *Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	/*unsigned int len1 = strlen(s);*/
	/*unsigned int len2 = strlen(accept);*/
	/*char *ptr;*/
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				/*ptr = (s + i);*/

				return (s + i);
			}

		}

	}

	return ('\0');
}
