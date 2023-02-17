#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int hex1 = 0x30;
	int hex2 = 0x061;

	while (hex1 <= 0x39)
	{
		putchar(hex1);
		hex1 += 1;
	}
	while (hex2 <= 0x66)
	{
		putchar(hex2);
		hex2 += 1;
	}
	putchar('\n');
	return (0);
}
