#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints anything
 * @format: Strings of format specifier to determine how to print each args
 *
 */
void print_all(const char *format, ...)
{
	va_list ptr;
	const char *str;
	char *separator = ", ";

	va_start(ptr, format);
	while (*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(ptr, const int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, const int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, const double));
				break;
			case 's':
				str = va_arg(ptr, const char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (*(format + 1) != '\0' &&(*format == 'c' ||
				*format == 'i' || *format == 's' ||
				*format == 'f'))
			printf("%s", separator);
		format++;
	}
	putchar('\n');
	va_end(ptr);
}
