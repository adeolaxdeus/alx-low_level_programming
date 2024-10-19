#include <stdio.h>
/**
 * main - Print program name
 * @argc: Number of command line args passed to program
 * @argv: Pointer to all args passed to program
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
