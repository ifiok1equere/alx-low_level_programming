#include "main.h"
#include <string.h>

/**
   *_strcmp - function to cat strings
   *@s1: 1st param
    *@s2: 2nd param
    *Return: return a character
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int l = 0;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) - *(s2 + i) != 0)
		{
			l = (*(s1 + i) - *(s2 + i));

			return (l);
		}
		break;

		if (*(s1 + i) - *(s2 + i) == 0)
		{
			continue;
		}
	}

	return (l);
}
