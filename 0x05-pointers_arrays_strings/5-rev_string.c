#include "main.h"
#include <string.h>

/**
 * rev_string - function reverses a string.
 *
 * @s: pointer to type char string variable to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	len = strlen(s) - 1;

	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
		i++;
	}
}
