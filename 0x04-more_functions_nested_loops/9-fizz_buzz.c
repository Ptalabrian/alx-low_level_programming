#include <stdio.h>

/**
 * main - Functions that print numbers from 0-100
 * Print Fizz for multiples of 3
 * Print Buzz for multiples of 5
 * Print FizzBuzz for multiples of 3 and 5
 * Return: 0 (End of Program)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
