#include "main.h"

/**
 * print_alphabets - prints alphabet, in lowercase
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_puchar('\n');
}
