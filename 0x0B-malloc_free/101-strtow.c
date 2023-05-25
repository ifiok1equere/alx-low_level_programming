#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - function spilts a string into words.
 * @str: pointer to the splitted string.
 *
 * Return: a pointer to the new concatenated string or NULL if it fails.
 */

char **strtow(char *str)
{
	int i = 0, j = 0, total_char_count = 0, k = 0, l = 0;
	char **ptr;

	if ((str == "") || (str  == NULL))
	{
		return (NULL);
	}
	while (str != '\0')
	{
		if (str[i] != " ")
		{
			total_char_count++;
		}
		i++;
	}

	ptr = (char **)malloc((sizeof(char *) * ));
	if (ptr == NULL)
		return (NULL);

	while (i < 5)
	{
		ptr[i] = (char *)malloc(sizeof(char));
	}

	for (j = 0; j < ac; j++)
	{
		while (av[j][k] != '\0')
		{
			ptr[l] = av[j][k];
			k++;
			l++;
		}
		ptr[l] = '\n';
		l++;
		k = 0;
	}
	ptr[l] = '\0';

	return (ptr);
}
