#include <stdio.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: Number of argument passed
 * @argv: Pointer to array of args passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
