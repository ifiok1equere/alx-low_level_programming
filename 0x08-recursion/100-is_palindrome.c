#include "main.h"
#include <string.h>

/**
 *reverse_check - reverse checker
 *@s: pointer argument to string literal
 *@i: 1st increment parameter
 *@j: 2nd increment parameter
 *Return: returns an integer
*/

int reverse_check(char *s, int i, int j)
{
	if (*(s + j) == *(s + i))
	{
		if (j <= (i / 2))
		{
			return (reverse_check(s, --i, ++j));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}


/**
  *is_palindrome - reverse check function
  *@s: pointer argument to string literal
  *Return: returns an integer
*/

int is_palindrome(char *s)
{
	int i;
	int j = 0;

	i = strlen(s) - 1;

	if (*(s + j) != *(s + i))
	{
		return (0);
	}
	else
	{
		return (reverse_check(s, i, j));
	}
}
