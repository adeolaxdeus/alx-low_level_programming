#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: the starting number to be printed to 98
 *
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n < 98)
	{
		n++;
		while (n < 99)
		{
			printf(", %d", n);
			n++;
		}
	}
	else
	{
		n--;
		while (n > 97)
		{
			printf(", %d", n);
			n--;
		}
	}
	printf("\n");
}
