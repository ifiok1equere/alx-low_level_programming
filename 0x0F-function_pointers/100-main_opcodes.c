#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the opcodes of this main function.
 * @argc: CLI argument count
 * @argv: array of CLI strings
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	char *ptr;

	if (argv == NULL)
		exit(3);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = argv[0];

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("\n");

	return (0);
}
