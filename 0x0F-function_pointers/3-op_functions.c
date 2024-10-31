#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Sum two integers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference between two integers
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculate product of two integers
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a number by another
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of a /  b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of the division of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
