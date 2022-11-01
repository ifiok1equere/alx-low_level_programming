#include "main.h"
#include <string.h>

/**
  *_strpbrk - string search
  *@s: param 1
  *@accept: prame 2
  *Return: pointer
  */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	for (i = 0; i <= strlen(haystack); i++)
	{
		for (j = 0; j <= strlen(needle); j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
			else
			{
				if (j == strlen(needle))
				{
					ptr = (haystack + i);
					return (ptr);

				}
			}
		}

	}

	return (NULL);
}
