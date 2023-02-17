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
	int num3 = 1;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 == 8)
			{
				putchar('\n');
				return (0);
			}
			putchar(',');
			putchar(' ');
			num2 += 1;
		}

	num3 += 1;
	num2 = num3;
	num1 += 1;
	}

	return (0);
}
