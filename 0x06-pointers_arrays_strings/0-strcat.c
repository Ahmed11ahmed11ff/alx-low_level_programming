#include "main.h"
#include <string.h>

/**
 *_strcat - concatenates two strings
 *
 *@dest: the destination string
 *@src: the source string
 *Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}
