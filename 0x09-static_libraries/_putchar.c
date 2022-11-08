#include <unistd.h>


/**
  *_putchar - writes to stdo
  *@c: param
  *Return: returns an int
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
