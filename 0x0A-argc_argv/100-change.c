#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: number of command line argument passed.
 * @argv: command line argument passed.
 *
 * Return: 0 on success, or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result, total, num, rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	result = num / 25;
	rem = num - (result * 25);
	total = result;
	num = rem;
	result = num / 10;
	total += result;
	rem = num - (result * 10);
	num = rem;
	result = num / 5;
	total += result;
	rem = num - (result * 5);
	num = rem;
	result = num / 2;
	total += result;
	rem = num - (result * 2);
	num = rem;
	result = num / 1;
	total += result;
	printf("%d\n", total);
	return (0);
}
