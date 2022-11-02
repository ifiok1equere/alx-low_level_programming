#include "main.h"

/**
  *_strlen_recursion - return lenght of string
  *@s: 1st param
  *Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}
}
