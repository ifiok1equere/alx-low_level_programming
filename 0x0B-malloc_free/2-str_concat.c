#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function concatenates two strings.
 * @s1: pointer to the 1st string.
 * @s2: pointer to the 2nd string.
 *
 * Return: a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0, j = 0, len, len1, len2;

	if (s1 == NULL)
	{
		len1 = 1;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 1;
	}
	else
	{
		len2 = strlen(s2);
	}
	len = len1 + len2;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[len + 1] = '\0';
	if (ptr)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
