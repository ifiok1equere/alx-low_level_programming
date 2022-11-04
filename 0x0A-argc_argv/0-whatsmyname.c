#include <unistd.h>
#include <string.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  *main - argc func
  *@argc - cml argument count
  *@argv - pointer to cml string arguments
  *
  *Return: an integer
  */

int main(int argc, char *argv[])
{
	unsigned int i;

	for (i = argc - argc; i < strlen(argv[0]); i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
