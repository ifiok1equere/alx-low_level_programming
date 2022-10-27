#include "main.h"
#include <string.h>

/**
   *_strncpy - function to cat strings
   *@dest: 1st param
    *@src: 2nd param
    *@n: 3rd param
    *Return: return a character
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int k;
	
	i = strlen(s1);
	j = strlen(s2);

	if (i < j)
	{
		k = -1 * 15;
		return (k);
	}

	else if (i > j)
	{
		k = 1 * 15;
		return (k);
	}

	else
	{
		k = 0;
		return (k);
	}
}
