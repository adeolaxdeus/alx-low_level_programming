#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings follow by new line
 * @separator: string to be printed between the strings
 * @n: number of parameters passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	const char *nxt_arg;
	va_list args;

	va_start(args, n);
	while (index < n)
	{
		nxt_arg = va_arg(args, const char *);
		if (nxt_arg == NULL)
		{
			printf("(nil)");
		}
		printf("%s", nxt_arg);
		if (separator != NULL && index != n - 1)
		{
			printf("%s", separator);
		}
		index++;
	}
	putchar('\n');
	va_end(args);
}
