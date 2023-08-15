#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 * Return: 1 on success
 * On error, -1 is return value, and errno is set appropriatley.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
