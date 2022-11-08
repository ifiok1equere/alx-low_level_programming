#include "main.h"
#include <string.h>

/**
  *_strlen - string length
  *@s: pointer parameter
  *Return: return integer
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
