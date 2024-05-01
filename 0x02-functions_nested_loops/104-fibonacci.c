#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int fibnum;
	int count = 0;

	printf("%u, %u", num1, num2);
	while (count < 97)
	{
		fibnum = num1 + num2;
		printf(", %u", fibnum);
		num1 = num2;
		num2 = fibnum;
		count++;
	}
	putchar('\n');
	return (0);
}
