#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: number of command line argument passed to the function.
 * @argv: arguments passed to the function
 *
 * Return:  Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
