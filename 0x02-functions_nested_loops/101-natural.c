#include <stdio.h>
/**
 * main - Print the sum of numbers below 1024.
 *
 * Description: Calculate and prints the sum of all multiples
 * of 3 and 5 below 1024(excluded).
 *
 * Return: 0 on success.
 */
int main(void)
{
	int x = 3; /* seed to begin count */
	int sum;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
