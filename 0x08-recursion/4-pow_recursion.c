#include "main.h"

/**
 * _pow_recursion - Function taht returns value of x raised to the power of y
 * @x: the value to multipy
 * @y: the times to multiply the value
 * Return: Value of x multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
