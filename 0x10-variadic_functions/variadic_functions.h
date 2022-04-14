#ifndef VARIADIC_FUNCTIONS_H

#define VARIADIC_FUNCTIONS_H

/**

 * struct in_format - Struct for formats

 *

 * @n: The format

 * @func: The function associated

 */

typedef struct in_format

{
	
	char *n;
	
	void (*func)();
	
} in_format;



int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);



#endif /* VARIADIC_FUNCTIONS_H */
