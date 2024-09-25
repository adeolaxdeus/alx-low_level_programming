#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long first_num = 0;
	unsigned long second_num = 1;
	unsigned long temp;
	int count = 0;

	while (count < 98)
	{
		temp = first_num + second_num;
		printf("%lu", temp);
		if (count != 97)
			printf(", ");
		first_num = second_num;
		second_num = temp;
		count++;
	}
	putchar('\n');
	return (0);
}
