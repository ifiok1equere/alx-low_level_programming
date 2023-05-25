#include "monty.h"
/**
 * get_op_func - function selects the correct stack function user needs
 * @s: parameter represents stact operation to done by user
 *
 * Return: a function pointer
 */

func get_op_func(char *op_code)
{

	instruction_t ops[] = {{"push", op_push}, {"pall", op_pall}, {NULL, NULL}};
	int i = 0;

	printf("got here too");

	while (i < 3)
	{
		if (strcmp(ops[i].opcode, op_code) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
