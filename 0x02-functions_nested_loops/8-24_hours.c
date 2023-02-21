#include "main.h"

/**
 * jack_bauer - function prints every minute
 *
 * Return: 0 (Always success)
 */
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i <= 2)
	{
		while (j <= 9)
		{
			while (k <= 5)
			{
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
					if (i == 2 && j == 3 && k == 5 && l == 10)
						return;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
