#include <stdio.h>
#include <stdlib.h>
/**
 * infinite_add - Adds two number.
 * @n1: Pointer to string of numbers.
 * @n2: Pointer to string of numbers to be add to n1.
 * @r: Pointer to buffer to store the result of n1 + n2.
 * @size_r: Size of buffer r.
 *
 * Return: Pointer to buffer r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int num1 = atoi(n1);
	unsigned int num2 = atoi(n2);
	int x;

	x = sprintf(r, "%d", (num1 + num2));
	if (x < size_r)
		return (r);
	return (0);
}
