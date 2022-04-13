#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations.
 * @argc: The number of command line arguments, the size of args
 * @argv: Array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc > 4)
	{
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	c = p(a, b);
	printf("%d\n", c);
	return (0);
}
