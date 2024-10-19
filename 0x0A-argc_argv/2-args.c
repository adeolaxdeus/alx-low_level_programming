#include <stdio.h>
/**
 * main - Prints all arguments it receive
 * @argc: Number of argument passed
 * @argv: Pointer to array of args passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
