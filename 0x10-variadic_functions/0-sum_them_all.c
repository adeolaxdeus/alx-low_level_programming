#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  Return sum a of all it parameters
 * @n: Number of parameters passed
 *
 * Return: Sum of all it parameters
 */
int sum_them_all(unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, const int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
