#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: the string to reverse
 * Return: 0 (End)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
