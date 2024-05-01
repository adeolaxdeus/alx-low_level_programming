#include <stdio.h>
/**
 * main - By considering the terms in the Fibonacci sequence whose values do
 * not exceed 4,000,000, write a program that finds and prints the sum of the
 * even-valued terms.
 *
 * Return: Always (0)
 */
int main(void)
{
	unsigned long int sum;
	unsigned long int num1 = 1, num2 = 1;
	unsigned long int fibnum;
	int count = 1;

	while (count)
	{
		fibnum = num1 + num2;
		if (fibnum <= 4000000)
		{
			if (fibnum % 2 == 0)
			{
				sum += fibnum;
			}
		}
		else
			break;
		num1 = num2;
		num2 = fibnum;
	}
	printf("%ld\n", sum);
	return (0);
}
