#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *i
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (n > 5)
		printf("last digits of %d is %d and is greater than 5", n, m);
	else if (n == 0)
		printf("last digits of %d is %d and is 0", n, m);
	else if (n < 6 && m == 0)
		printf("last digits of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
