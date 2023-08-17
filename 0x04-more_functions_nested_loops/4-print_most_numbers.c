#include "main.h"
/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4
 * Return: 0 (End of program)
 */
void print_most_numbers(void)
{
	int c;

	for (c = 28; c < 38; c++)
	{
		if (c != 32)
		{
			if (c != 34)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
