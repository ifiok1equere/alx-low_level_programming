#include "main.h"
#include <string.h>

/**
  *_strchr - function returns 1st occurence of str
  *@s: 1st param
  *@c: 2nd param
  *Return: returns a pointer to 1st occur. of string subset
*/

char *_strchr(char *s, char c)
{
	char *ptr;
	unsigned int i;

	for (i = 0; i <= strlen(s); i++)
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}
		else
		{
			continue;
		}

	}

	return (NULL);
}
