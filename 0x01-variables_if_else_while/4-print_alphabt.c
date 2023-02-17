#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha += 1;
	}
	putchar('\n');
	return (0);
}
