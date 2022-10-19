#include "main.h"

/**
 *print_alphabet_x10 - check the code
 *Description - print 10 times
 *Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int x = 1;
	int i;

	while (x <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		x = x + 1;
		_putchar('\n');
	}
}
