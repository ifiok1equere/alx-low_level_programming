#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes to be concatenated with s1 from s2
 *
 * Return: a pointer to the newly allocated space in memory \
 * for the newly formed string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2, concat_len, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	if (n >= strlen(s2))
	{
		len2 = strlen(s2);
	}
	else
	{
		len2 = n;
	}
	concat_len = len1 + len2 + 1;

	ptr = malloc(sizeof(char) * (concat_len));
	if (!ptr)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
