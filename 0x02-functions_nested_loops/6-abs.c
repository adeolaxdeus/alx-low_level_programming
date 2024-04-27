#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @num: number to be compute.
 *
 * Return: Absolute value number of num
 */
int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;/* change negative to positive */
	}
	return (num);
}
