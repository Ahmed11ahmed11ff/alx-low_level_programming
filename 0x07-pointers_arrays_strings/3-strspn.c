#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
