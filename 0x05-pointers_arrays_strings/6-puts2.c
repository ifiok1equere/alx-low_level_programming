#include "main.h"

/**
   * puts2 - skipping func
    *@str: param
     * Return: Always nothing.
*/


void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i <= j - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
