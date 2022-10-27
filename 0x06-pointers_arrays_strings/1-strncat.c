#include "main.h"
#include <string.h>

/**
    *_strcat - function to cat strings
      *@dest: 1st param
        *@src: 2nd param
	  *Return: return a character
	  */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);


	if (n > len2)
	{
		for (i = 0; i <= len2; i++)
		{
			*(dest + len1 + i) = *(src + i);
		}
	}
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			*(dest + len1 + i) = *(src + i);
		}
	}

	return (dest);
}
