#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 * , and initializes it with a specific char.
 *
 * @size: Size of array.
 * @c: Char to assign.
 * Description: Create an array of size size and assign char c.
 * Return: pointer to array if size != 0 || str != NULL, eihter return NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)

		return (NULL);

	for (i = 0 ; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
