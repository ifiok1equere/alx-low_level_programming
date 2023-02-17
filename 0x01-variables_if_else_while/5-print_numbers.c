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
		printf("%d", num);
		num += 1;
	}
	putchar('\n');
	return (0);
}
