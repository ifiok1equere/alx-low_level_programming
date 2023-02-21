#include "main.h"

/**
 * _isalpha - function checks for lowercase character
 * @c: character parameter to be checked
 *
 * Return: returns interger
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
