#include "main.h"
#include <string.h>

/**
 *string_toupper - function to cat strings
 *@str: 1st param
 *Return: return a character
*/

char *string_toupper(char *str)
{
	int i;
	int j;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		if (*(str + i) >= 'a' || *(str + i) <= 'z')
		{
			j = *(str + i) - 'A';

			if (j > 25)
			{
				*(str + i) = *(str + i) - 32;
			}
		}
	}

	return (str);
}
