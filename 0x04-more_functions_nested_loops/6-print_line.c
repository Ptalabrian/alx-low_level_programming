#include "main.h"
/**
 * print_line - Print a straight line
 * @n: number of times character _ should be printed
 * Return: 0 (End program)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n);
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
