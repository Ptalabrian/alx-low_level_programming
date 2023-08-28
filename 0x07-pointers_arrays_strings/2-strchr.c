#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: input string to be searched
 * @c: character to be located
 * Return: c is found return pointer to first occurance and if not return NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
