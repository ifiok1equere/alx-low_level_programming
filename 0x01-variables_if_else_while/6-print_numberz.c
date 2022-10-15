#include <stdio.h>
/**
  *main - function prints numbers
  *Description - function prints base 10 numbers
  *Return: returns an integer
 */

int main(void)
{
	long int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
