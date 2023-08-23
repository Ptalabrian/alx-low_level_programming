#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concanates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Back to dest
 */

char *strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
