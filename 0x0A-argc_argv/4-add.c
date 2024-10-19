#include <stdio.h>
#include <stdlib.h>
/**
 * check - If a string consist of integers only
 * @ptr: Pointer to string to be check
 *
 * Return: 1 if ptr consist of digits only otherwise 0.
 */
int check(char *ptr)
{
	char *temp = ptr;

	while (*temp)
	{
		if (*temp >= '0' && *temp <= '9')
			temp++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - Adds positive number
 * @argc: Number of arguments passed
 * @argv: Pointer to array of numbers passed
 *
 * Return: 0 on success otherwise 1
 */
int main(int argc, char *argv[])
{
	int total, i = 1;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	while (i < argc)
	{
		if (check(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}
