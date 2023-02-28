#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - function prints every other character of a string.
 *
 * @str: pointer to type char string variable to be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	len = strlen(str);

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
