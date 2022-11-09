#include <stdlib.h>
#include <string.h>
/*#include <stdio.h>*/

/**
  *_strdup - point to a str copy
  *@str: param defining string to be copied
  *Return: returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int size;

	i = 0;
	size = strlen(str);
	
	/*printf("%d: ", size);*/

	if (!(ptr = (char *)malloc(sizeof(char) * size + 1)))
	{
		return (NULL);
	}
	while (*str)
	{
		ptr[i++] = *str++;
	}
	ptr[i] = '\0';
	
	return (ptr);

	free(ptr);
}
