#include "main.h"
#include <string.h>

/**
  *_strspn - length of prefix
  *@s: 1st param
  *@accept: 2nd param
  *Return: unasigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int l_o = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				l_o++;
				break;
			}
		}

	}

	return (l_o);
}
