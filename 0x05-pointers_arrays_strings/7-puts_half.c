#include "main.h"

/**
   * puts_half - half func
    *@str: param
     * Return: Always nothing
*/

void puts_half(char *str)
{
	int i = 0;
	int j;
	
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
