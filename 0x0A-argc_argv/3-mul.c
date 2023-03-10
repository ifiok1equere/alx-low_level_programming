#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to pass command line arguments to the program.
 * @argc: the command line argument count
 * @argv: an array of pointers to string found in the command line argument.
 *
 * Return: 0 for success.
 */


int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
