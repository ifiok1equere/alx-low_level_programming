#include "main.h"
#include <string.h>

/**
  *_strstr - string search
  *@haystack: param 1
  *@needle: prame 2
  *Return: pointer
  */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
			if (j == strlen(needle))
			{
				ptr = (haystack + i);
				return (ptr);
			}
		}

	}

	return (NULL);
}
