/**
 * op_add - Calculate the sum of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculate the difference of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Calculate the product of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Calculate the division of a by b.
 * @a: Dividend.
 * @b: Divisor.
 *
 * Return: Division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * op_mod - Calculate the remainder of the division of a by b.
 * @a: Dividend.
 * @b: Divisor.
 *
 * Return: Remainder of the division a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
