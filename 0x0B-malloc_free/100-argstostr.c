#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - function concatenates all the arguments of my program.
 * @ac: the command line argument count.
 * @av: double pointer to the string arguments on the command line.
 *
 * Return: a pointer to the new concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_str_count = 0, k = 0, l = 0;
	char *ptr;

	if ((ac == 0) || (av  == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_str_count += strlen(av[i]);
	}
	ptr = (char *)malloc((sizeof(char) * total_str_count) + 1);
	if (ptr == NULL)
		return (NULL);

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
