#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments passed
 * @argv: command line arguments passed to the function.
 *
 * Return: 0 on success or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		}
	return (0);
}
