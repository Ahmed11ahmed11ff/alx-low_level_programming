#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next_num, i;

	printf("%lu, %lu", num1, num2);
	for (i = 2; i < 50; i++)
	{
		next_num = num1 + num2;
		printf(", %lu", next_num);
		num1 = num2;
		num2 = next_num;
	}
	printf("\n");
	return (0);
}
