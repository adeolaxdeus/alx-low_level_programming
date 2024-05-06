#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 * @a: pointer to a string
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(",");
			printf(" ");
		}
		index++;
	}
	printf("\n");
}
