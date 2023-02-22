#include "main.h"
/**
 * times_table - function prints the 9-times table
 *
 * Return: nothing as a void function.
 */
void times_table(void)
{
	int i = 0, j = 0, k;

	while (i <= 9)
	{
		while (j <= 9)
		{
			k = i * j;
			if (k <= 9 || ((i * (j + 1)) <= 9))
			{
				_putchar(k + '0');
				if (j != 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
