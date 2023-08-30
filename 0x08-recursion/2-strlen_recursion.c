#include "main.h"

/**
 * _strlen_recursion - Function that returns length of a string
 * @s: the string to count
 * Return: the integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
