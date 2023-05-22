#include "main.h"

/**
 * _islower - function checks for lowercase character
 * @c: character parameter to be checked
 *
 * Return: returns interger
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
