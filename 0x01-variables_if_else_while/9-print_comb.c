#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num == 9)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
		num += 1;
	}
	return (0);
}
