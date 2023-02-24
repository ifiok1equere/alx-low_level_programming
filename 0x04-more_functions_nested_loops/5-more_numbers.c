#include "main.h"
/**
 * more_numbers - function prints numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char i = 0, j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if ((j < 10) || ((j / 10) > 0))
			{
				_putchar(j + '0');
			}
			if (j / 10 != 0)
			{
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
