#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function prints the result of a user computation
 * @argc: the CLI argument count
 * @argv: array of strings entered on the CLI by user
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	/*int i, j = 0*/
	int final_int_return;
	/*char *array[] = {"+", "-", "*", "/", "%"};*/
	int (*func_pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((strcmp(argv[2], "+") != 0) && (strcmp(argv[2], "-") != 0)
			&& (strcmp(argv[2], "*") != 0) && (strcmp(argv[2], "/") != 0)
			&& (strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if (strcmp(argv[3], "0") == 0)
	{
		if ((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
		{
			printf("Error\n");
			exit(100);
		}
	}
	func_pointer = get_op_func(argv[2]);

	func_pointer = get_op_func(argv[2]);
	final_int_return = func_pointer(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", final_int_return);

	return (0);
}
