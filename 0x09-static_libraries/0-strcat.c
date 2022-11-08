#include "main.h"
#include <string.h>

/**
  *_strcat - function to cat strings
  *@dest: 1st param
  *@src: 2nd param
  *Return: return a character
*/

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		*(dest + len1 + i) = *(src + i);

		/*strcat(*dest, *src);*/
	}

	return (dest);
}
