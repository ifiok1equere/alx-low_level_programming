#include <stdlib.h>

/**
  *create_array - create an array of characters
  *@size: param defining size of array to be created
  *@c: param defining lone character to be stored
  *Return: returns a pointer to the space reserved in memory
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * size);

		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				*(ptr + i) = c;
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
