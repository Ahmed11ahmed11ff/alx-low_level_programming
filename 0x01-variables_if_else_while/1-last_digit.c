#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* 
 *main: -  entry point
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;
	pritnf("Last digit of %d is %d ", n,lst);
	if (lst > 5)
		printf("and is greater than 5\n");
	else if (lst = 0)
		printf("and is 0\n");
	else 
		printf("and is less than 6 and not 0\n"0);
	return (0);
}
