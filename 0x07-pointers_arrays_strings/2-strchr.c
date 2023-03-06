#include "main.h"
#include <string.h>

/**
 * _strchr - Locates the first occurrence of character c in string s.
 * @s: Pointer to the string to search.
 * @c: The character to search for.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
