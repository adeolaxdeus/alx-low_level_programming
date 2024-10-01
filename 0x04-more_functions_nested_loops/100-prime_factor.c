#include <stdio.h>
/**
 * main - Find and print the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
	long int num = 612852475143;
	long int div = 3; /**
				  * start from 3 instead of 2 since its the
				  * largest factor i wanna compute
				  */
	while (div * div <= num) /* Stops if div == square root of num */
	{
		while (num / div == 0)
		{
			num /= div;
		}
		div += 2;
	}
	printf("%ld\n", div);
	return (0);
}
