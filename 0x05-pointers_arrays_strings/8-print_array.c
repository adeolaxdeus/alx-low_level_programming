#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n element of an array of integers
 * @a: Pointer to an array of type int
 * @n: Number of element to be printed
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
