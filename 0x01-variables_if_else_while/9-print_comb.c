#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 8)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num += 1;
	}
	putchar(num + '0');
	return (0);
}
