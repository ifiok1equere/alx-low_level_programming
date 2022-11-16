#include "function_pointers.h"

/**
  *print_name - name printing function
  *@name: pointer to name param
  *@f: function pointer parameter
  *Return: returns -1
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
	else
	{
		f(NULL);
	}
}
