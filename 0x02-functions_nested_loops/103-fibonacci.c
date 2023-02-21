#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of even-valued terms in the Fibonacci sequence
 * up to 4,000,000, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1 = 1, num2 = 2, next = 0;
	long int sum = 2;

	while (next <= 4000000)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum += next;
		num1 = num2;
		num2 = next;
	}
	printf("%ld\n", sum);

	return (0);
}
