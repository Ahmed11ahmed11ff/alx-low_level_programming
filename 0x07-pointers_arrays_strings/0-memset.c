#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to the memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0;)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
