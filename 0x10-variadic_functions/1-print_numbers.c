#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers followed by newline
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n != 0)
	{
		va_start(ptr, n);
		while (i < n)
		{
			printf("%d", va_arg(ptr, const int));
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
			i++;
		}
		putchar('\n');
	}
	va_end(ptr);
}
