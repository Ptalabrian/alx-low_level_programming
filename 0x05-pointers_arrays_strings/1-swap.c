#include <stdio.h>
/**
 * swap_int - Swaps values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
