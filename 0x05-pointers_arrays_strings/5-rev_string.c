#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function reverses a string.
 *
 * @s: pointer to type char string variable to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char *p;

	p = s;
	/*printf("%p\n", p);*/

	i = strlen(s) - 1;

	while (i >= 0)
	{
		p[j] = s[i];
		printf("%c\n", p[i]);
		i--;
		j++;
	}
}
