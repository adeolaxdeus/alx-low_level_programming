#include "main.h"
/**
 * _abs - Computes the absolute value of a number.
 * @x: Required.  A number
 *
 * Return: Absolute value of the input.
 */
int _abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}
