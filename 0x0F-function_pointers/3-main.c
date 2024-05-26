#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point.
 * @argc: Number of command line argument passed.
 * @argv: Command line arguments passed.
 *
 * Return: 0 on success otherwise 98 or 99 or 100 on failure.
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0' && argv[3][1] == '\0')
	{
		printf("Error\n");
		return (100);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
