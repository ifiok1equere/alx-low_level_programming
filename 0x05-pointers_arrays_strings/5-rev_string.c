#include "main.h"

/**
  *rev_string - reverse string
  *@s: param
  *Return: integer
  */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (j = i; j > i / 2; j--)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
	}
}
