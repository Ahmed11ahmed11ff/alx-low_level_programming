#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 numbers of Fibonacci
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, n1, n2, tmp;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu", n1, n2);
	for (i = 0; i < 96; i++)
	{
		tmp = n1 + n2;
		printf(", %lu", tmp);
		n1 = n2;
		n2 = tmp;
	}
	printf("\n");
	return (0);
}
