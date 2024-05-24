#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: Number of parameters passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	int nxt_arg;
	va_list args;

	if (n == 0)
	{
		return;
	}
	va_start(args, n);
	while (index < n)
	{
		nxt_arg = va_arg(args, const unsigned int);
		printf("%d", nxt_arg);
		if (separator != NULL && index != n - 1)
		{
			printf("%s", separator);
		}
		index++;
	}
	putchar('\n');
	va_end(args);
}
