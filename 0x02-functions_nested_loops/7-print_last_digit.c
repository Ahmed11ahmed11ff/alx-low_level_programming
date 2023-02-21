#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit of n
 */

int print_last_digit(int n)
{
	int last;
	last = _abs(n % 10);
	_putchar(last + '0');
	return (last);
}
	
