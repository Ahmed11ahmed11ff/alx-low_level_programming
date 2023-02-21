#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 *
 * return: 1 if character is a letter, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
