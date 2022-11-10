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
	unsigned int j;

	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";
	if (s1 == NULL && s2 != NULL)
		s1 = "";
	if (s1 != NULL && s2 == NULL)
		s2 = "";

	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= strlen(s1); j++)
	{
		*(ptr + j) = *(s1 + j);
	}
	for (j = 0; j <= strlen(s2); j++)
	{
		*(ptr + strlen(s1) + j) = *(s2 + j);
	}
	return (ptr);
	free(ptr);
}
