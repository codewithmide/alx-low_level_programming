#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: Represent the number of parameters to sum.
 * Return: su.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list p;

	va_start(p, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + (va_arg(p, int));
	}
	va_end(p);
	return (sum);
}
