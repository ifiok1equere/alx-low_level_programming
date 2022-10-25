#include "main.h"

/**
   * print_rev - check the code
    *@s: parameter
     * Return: Always nothing
 */

void print_rev(char *s)
{
	/*int i = 0;*/
	/*int j;*/
	int len = 0;
	char *v = s;

	while (*v != '\0')
	{
		len++;
		v++;
	}

	len = len - 1;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
