#include "main.h"

/**
 * reverse_array - Reverses an array of integers in place.
 *
 * @a: The array to reverse.
 * @n: The length of the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
