#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural number from n to 98.
 * @n: Required. Starting number.
 *
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}
	while (n !=  98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
