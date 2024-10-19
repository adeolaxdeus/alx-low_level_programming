#include <stdio.h>
#include <stdlib.h>
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
		if (atoi(argv[i]))
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
