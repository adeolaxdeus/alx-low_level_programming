#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int fibnum;
	int count = 0;

	printf("%ld, %ld,", num1, num2);
	while (count < 49)
	{
		fibnum = num1 + num2;
		printf(" %ld", fibnum);
		if (count != 48)
		{
			putchar(',');
		}
		num1 = num2;
		num2 = fibnum;
		count++;
	}
	putchar('\n');
	return (0);
}
