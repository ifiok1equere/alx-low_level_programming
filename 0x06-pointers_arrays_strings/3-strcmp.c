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
	int l;


	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			if (*(s1 + i) > *(s2 + i))
			{
				l = 15;
				return (l);
			}

			else
			{
				l = -1 * 15;
				return (l);
			}

			break;
		}
	}

	if (l != 15 || l != -15)
	{
		l = 0;
		return (0);
	}
}
