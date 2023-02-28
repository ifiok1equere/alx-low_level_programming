#include "main.h"
#include <string.h>

/**
 * puts_half - function prints half of a string.
 *
 * @str: pointer to type char string variable to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0, len = 0;

	len = strlen(str);
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;
	}

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
