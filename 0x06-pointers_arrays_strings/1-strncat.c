#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
