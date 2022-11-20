#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

void p_char(va_list a);
void p_int(va_list b);
void p_float(va_list x);
void p_string(va_list d);
/**
  *struct dtype - strut definition
  *@chrter: param
  *@f: funtion pointer
*/

typedef struct dtype
{
	char chrter;
	void (*f)(va_list user_list);
} datatype;

/**
  *print_all - print anything
  *@format: list of argument types
  *Return: return 0
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list user_list;
	char *sep = "";

	datatype d[] = {
			{'c', p_char},
			{'i', p_int},
			{'f', p_float},
			{'s', p_string}
		};

	va_start(user_list, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (format[i] != (d[j].chrter)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", sep);
			d[j].f(user_list);
			sep = ", ";
		}

		i++;
	}

	va_end(user_list);

	printf("%c", '\n');
}


/**
  *p_char - print char func
  *@a: list
  *Return: returns 1
 */
void p_char(va_list a)
{
	char c;

	c = va_arg(a, int);
	printf("%c", c);
}

/**
  *p_int - print int func
  *@b: list
  *Return: returns 1
  */
void p_int(va_list b)
{
	int c;

	c = va_arg(b, int);
	printf("%d", c);
}
/**
  *p_float - print float func
  *@x: list
  *Return: returns 1
  */
void p_float(va_list x)
{
	float c;

	c = va_arg(x, double);
	printf("%f", c);
}

/**
  *p_string - print string func
  *@d: list
  *Return: returns 1
 */
void p_string(va_list d)
{
	char *c;

	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	c = va_arg(d, char *);
	printf("%si", c);
}
