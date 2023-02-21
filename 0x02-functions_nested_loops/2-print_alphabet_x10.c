#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char let;

	for (i = 0; i <= 9; i++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
