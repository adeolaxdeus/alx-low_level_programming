#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two number
 * @argc: Number of arguments passed
 * @argv: Pointer to two numbers passed as arguments
 *
 * Return: 0 on success otherwise 1
 *
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
