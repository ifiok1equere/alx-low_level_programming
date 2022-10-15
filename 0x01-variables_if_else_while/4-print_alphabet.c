#include <stdio.h>
/**
  *main - function prints lower case
  *Description - function prints lower case letters but with exceptions
  *Return: returns an integer
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
