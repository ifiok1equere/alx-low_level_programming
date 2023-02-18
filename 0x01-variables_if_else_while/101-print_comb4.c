#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 2;

	int num4 = 2;
	int num5 = 1;
	int num6 = 2;

	while (num1 <= 8)
	{
		while (num2 < 9)
		{
			while (num3 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 == 7)
				{
					putchar('\n');
					return (0);
				}
				putchar(',');
				putchar(' ');
				num3 += 1;
			}
			num4 += 1;
			num3 = num4;
			num2 += 1;
		}
		num5 += 1;
		num6 += 1;
		num2 = num5;
		num3 = num6;
		num4 = num6;
		num1 += 1;
	}
	return (0);
}
