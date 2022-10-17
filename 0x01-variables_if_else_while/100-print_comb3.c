#include <stdio.h>

/**
  *main - combo3 function
  *Description - function combine al possble 2 digits
  *Return: returns an integer
*/

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 1;

	while (a < 9)
	{
		if (b <= 9)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (b == 9 && a == 8)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				continue;
			}
		b = b + 1;
		}
		else
		{
			a = a + 1;
			c = c + 1;
			b = c;

		}
	}
	putchar('\n');
	return (0);
}
