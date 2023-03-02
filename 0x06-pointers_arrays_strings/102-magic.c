#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a[5] = {98, 102, 402, -1024, 98};
	int *p;

	p = &a[2];
	*(p + 1) = 98;

	printf("a[2] = %d\n", *(a + 2));
	
	return (0);
}

