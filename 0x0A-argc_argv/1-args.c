#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line argument passed to program
 * @argv: argument passed  to function
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
