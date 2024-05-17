#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - check if a character is number or not
 * @c: value to be checked
 *
 * Return: 1 on success or 0 otherwise
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * main - a program that adds positive numbers.
 * @argc: number of digit  passed to the program
 * @argv: digit to be multiply
 *
 * Return: 0 on success, or 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i = 1, j;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (!_isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
