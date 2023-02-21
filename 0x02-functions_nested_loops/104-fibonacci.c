#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next_num;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;

		printf(", %lu", next_num);
	}
	printf("\n");

	return (0);
}
