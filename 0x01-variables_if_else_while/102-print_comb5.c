#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 1, num_4 = 1;

	while (num1 <= 9)
	{
		while (num2 < 9)
		{
			while (num3 <= 9)
			{
				while (num4 <= 9)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					putchar(',');
					putchar(' ');
					num4 += 1;
				}
				if (num3 == 9)
				{
					num_4 += 1;
					num4 = num_4;
				}
				else
				{
					num4 = 0;
				}
				num3 += 1;
			}
			num3 = 0;
			num2 += 1;
		}
		num2 = 0;
		num1 += 1;
	}
	return (0);
}
