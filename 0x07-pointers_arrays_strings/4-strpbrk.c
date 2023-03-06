#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Pointer to the first occurrence of a matching byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
