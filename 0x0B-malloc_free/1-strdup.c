#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a the copy of a string pointer to by
 * parameter str.
 * @str: pointer to the string to be copied.
 *
 * Return: a pointer to the newly copied string.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
