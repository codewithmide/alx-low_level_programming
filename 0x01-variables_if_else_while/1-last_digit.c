#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 6)
		printf("%d and is greater than 5\n", n);
	if (n == 0)
		printf("%d and is 0\n", n);
	if ((n < 6) != 0)
		printf("%d is less than 6 and not 0\n", n);
	return (0);
}