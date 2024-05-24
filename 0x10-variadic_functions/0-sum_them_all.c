#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters passed
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index = 0, total = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (index < n)
	{
		total += va_arg(args, const int);
		index++;
	}
	va_end(args);
	return (total);
}
