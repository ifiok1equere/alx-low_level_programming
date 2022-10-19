#include <stdio.h>
#include "main.h"

int cathy(void);
//int summation(void);

int main(void)
{
	cathy();
	int y = summation();
	printf("The value %d is correct.\n", y);
	return (0);
}

int cathy(void)
{
	printf("Cathy is great @ programming\n");
}

/*
int summation(void)
{
	int a = 100;
	int b = 200;
	int c = a + b;

	printf("%d\n", c);
}
*/
