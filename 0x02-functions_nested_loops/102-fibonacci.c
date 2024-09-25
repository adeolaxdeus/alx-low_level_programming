#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers starting with 1 and 2.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long first_num = 1;
	unsigned long second_num = 1;
	unsigned long temp;
	int count = 1;

	printf("%lu", first_num);
	while (count < 50)
	{
		temp = first_num + second_num;
		printf(", %lu", temp);
		first_num = second_num;
		second_num = temp;
		count++;
	}
	putchar('\n');
	return (0);
}
