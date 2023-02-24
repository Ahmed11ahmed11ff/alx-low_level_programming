#include "main.h"

/**
 * print_most_numbers - prints the numbers from 1 to 9, expect 2 and 4.
 *
 * return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		if (i != 52 || i != 50)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
