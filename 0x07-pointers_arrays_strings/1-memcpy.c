#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to the memory area to copy to.
 * @src: Pointer to the memory area to copy from.
 * @n: The number of bytes to be copied.
 *
 * Return: Pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
