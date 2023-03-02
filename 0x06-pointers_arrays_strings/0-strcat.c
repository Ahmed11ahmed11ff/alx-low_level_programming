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
	return (strcat(*dest, *src));
}
