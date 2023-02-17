#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num += 1;
	}
	putchar('\n');
	return (0);
}
