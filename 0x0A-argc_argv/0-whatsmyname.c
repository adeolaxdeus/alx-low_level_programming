#include <stdio.h>
/**
 * main - Prints its name, followed by a new line.
 * @argc: command-line argument number
 * @argv: pointer to command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
