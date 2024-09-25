#include <stdio.h>
/**
 * main - Sum the total of even fibonacci numbers not exceeding 4,000,000.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned int first_num = 0;
	unsigned int second_num = 1;
	unsigned int temp;
	unsigned int total;

	while (temp < 4000000)
	{
		if (temp % 2 == 0)
			total += temp;
		temp = first_num + second_num;
		first_num = second_num;
		second_num = temp;
	}
	printf("%u\n", total);
	return (0);
}
