#include <stdlib.h>
#include <time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_digit=n%10;
	pritnf("Last digit of %d is %d ", n,last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit =0)
		printf("and is 0\n");
	else 
		printf("and is less than 6 and not 0\n"0);
	return (0);
}
