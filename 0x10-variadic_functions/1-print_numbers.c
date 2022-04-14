#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lc;
	unsigned int i;

	va_start(lc, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lc, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lc);
}
