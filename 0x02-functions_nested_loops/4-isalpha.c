#include "main.h"
#include <ctype.h>

/**
  *_isalpha - checks for alpha char
  *@c: parameter
  *Description - function checks for alphabet
  *Return: Always 0
  */

int _isalpha(int c)
{
	int a = 0;
	int b = 1;

	if (isalpha(c))
	{
		return (b);
	}
	else
	{
		return (a);
	}
}

