#include "main.h"

/**
 * print_alphabet - prints alpha in lowercase
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
