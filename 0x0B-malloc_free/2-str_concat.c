#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
  *str_concat - point to a concatenated string
  *@s1: pram is a pointer to the destination string
  *@s2: param is a pointer to the src string
  *Return: returns a pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, j;
	unsigned int size;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2;

	ptr = (char *)malloc(sizeof(char) * size + 1);

	if (ptr != NULL)
	{
		for (j = 0; j <= len1; j++)
		{
			*(ptr + j) = *(s1 + j);
		}
		for (j = 0; j <= len2; j++)
		{
			*(ptr + len1 + j) = *(s2 + j);
		}
	}
	else
	{
		return (NULL);
	}

	*(ptr + size) = '\0';

	return (ptr);

	free(ptr);
}
