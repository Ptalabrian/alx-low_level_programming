#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: Constant byte
 * @n: byte
 * Return: 0 (End)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
