#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all arguements passed
 * @n: number of passed arguements
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
