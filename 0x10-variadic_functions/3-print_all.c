#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct op - Struct op
 *
 * @style: The format specifier
 * @f: The function associated
 *
 */
typedef struct op
{
	char *style;
	void (*f)(va_list string);
}op_t;

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
/**
 * print_all - Prints anything.
 * @format: Strings of format specifiers.
 *
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list args;
	int i;
	const char *temp = format;
	int printed = 0; /* Flag to track if n argument has been printed */

	va_start(args, format);
	while (temp && *temp)
	{
		i = 0;
		while (ops[i].style != NULL)
		{
			if (*temp == ops[i].style[0])
			{
				if (printed)
				{
					printf(", ");
				}
				 ops[i].f(args);
				 printed = 1;
				 break;
			}
			i++;
		}
		temp++;
	}
	va_end(args);
	putchar('\n');
}
/**
 * print_char - Print a char type value.
 * @c: Character to be printed.
 *
 */
void print_char(va_list c)
{
	char character = va_arg(c, const int);

	printf("%c", character);
}
/**
 * print_int - Print an int type value.
 * @num: Integer to be printed.
 *
 */
void print_int(va_list num)
{
	int i = va_arg(num, int);

	printf("%d", i);
}
/**
 * print_float - Print a float type value.
 * @num: float type value to be print.
 *
 */
void print_float(va_list num)
{
	double i = va_arg(num, double);

	printf("%f", i);
}
/**
 * print_str - Print a string type value.
 * @str: String to be print
 *
 */
void print_str(va_list str)
{
	const char *s = va_arg(str, const char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", s);
}
