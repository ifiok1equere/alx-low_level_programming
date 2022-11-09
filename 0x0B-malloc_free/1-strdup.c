#include <stdlib.h>
#include <string.h>

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

	size = strlen(str);

	if (size <= 0)
	{
		return (NULL);
	}
	else if (NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * size + 1);

		if (ptr != NULL && str != NULL)
		{
			for (i = 0; i < size; i++)
			{
				*(ptr + i) = *(str + i);
			}

			*(ptr + size) = '\0';
		}
		else
		{
			return (NULL);
		}

		return (ptr);
	}

	free(ptr);
}
