#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int factor = 2;
	unsigned int largestFactor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			if (largestFactor < factor)
			{
				largestFactor = factor;
			}
		}
		else
			factor++;
	}
	printf("%u\n", largestFactor);
	return (0);
}
