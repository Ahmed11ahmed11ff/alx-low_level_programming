#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	return(strstr(haystack, needle));
}
