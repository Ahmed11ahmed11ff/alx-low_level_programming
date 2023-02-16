#include <stdio.h>
/**
 * main - A  program that prints the size of various types on the computer
 * Return 0 (seccess)
 */
int main(void)
{
	char r;
	int n;
	long int ln;
	long long ll;
	float f;
	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(r));
        printf("Size of a int: %lu byte(s) \n", (unsigned long)sizeof(n));
        printf("Size of an long int: %lu byte(s) \n", (unsigned long)sizeof(ln));
	printf("Size of a long long: %lu byte(s) \n", (unsigned long)sizeof(ll));
        printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}	
