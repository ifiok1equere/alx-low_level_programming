#include <stdio.h>

/**
  *main - natural numbers
  *Description - multiples
  *Return: always 0
*/

int main(void)
{
	int i;
	int a = 5;
	int j = 3;
	int mul3;
	int mul5;
	int m3 = 0;
	int m5 = 0;
	int mulsum;

	for (i = 1; i < 1024; i++)
	{
		if (m5 < 1024)
		{
			mul5 = a * i;
			m5 = m5 + mul5;
		}
		if (m3 < 1024)
		{
			mul3 = j * i;
			m3 = m3 + mul3;
		}
		else
		{
			break;
		}
	}
	mulsum = m3 + m5;
	printf("%d\n", mulsum);
}
