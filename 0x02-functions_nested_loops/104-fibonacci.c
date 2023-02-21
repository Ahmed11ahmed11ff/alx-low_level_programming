#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 numbers of Fibonacci
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	if (n >= 98)
	{
		while(n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
