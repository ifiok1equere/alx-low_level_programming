#include <stdio.h>

/**
  *main- Print function
  *Description: 'The program prints the sizes of different data types
  *Return: this function return an integer 0
*/
int main(void)
{
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(float));
}
