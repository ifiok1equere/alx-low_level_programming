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
	int j;
	int k;
	int l;

	i = strlen(s1);
	j = strlen(s2);
	
	if (i > j)
	{ 
		k = i;
	}
	else
	{
		k = j;
	}

	for (i = 0; i <= k; i++)
	{
		int temp1 = s1[i];
		int temp2 = s2[i];

		l = temp1 - temp2;

		if (l == 0)
		{
			continue;
		}
		else
		{
			break;
		}
	}

	return (l);
}
