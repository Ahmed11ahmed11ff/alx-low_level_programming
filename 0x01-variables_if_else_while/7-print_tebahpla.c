#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	c = 'z';
	for (i = 0; i <= 'z' ; i--)
	{
		putchar(c);
	}
	putchar('\n');
}
