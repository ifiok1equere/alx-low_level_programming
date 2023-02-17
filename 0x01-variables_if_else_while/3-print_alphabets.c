#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	char small_alpha = 97;
	char big_alpha = 65;

	while (small_alpha <= 122)
	{
		putchar(small_alpha);
		small_alpha += 1;
	}
	while (big_alpha <= 90)
	{
		putchar(big_alpha);
		big_alpha += 1;
	}

	putchar('\n');
	return (0);
}
