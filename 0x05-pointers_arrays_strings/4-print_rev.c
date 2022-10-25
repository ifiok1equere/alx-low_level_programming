#include "main.h"

/**
   * main - check the code
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

	/*for (j = len - 1; j < len; j--)
	{
		if (s[j] != '\0')
		{
			_putchar(s[j]);
		}
		else
		{
			break;
		}
	}*/

	len = len - 1;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
