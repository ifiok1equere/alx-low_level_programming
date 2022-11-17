#include "3-calc.h"


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;
	
	while (i < 6)
	{
		ops[i]->op = ops[i][0];
		ops[i][1]->f = ops[i][1];

		if (s == ops[i].op)
		{
			return (f(int, int));
		}

		i++;
	}
		
}
