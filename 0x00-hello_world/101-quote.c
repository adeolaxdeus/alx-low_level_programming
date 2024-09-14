#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Write a string to stderr.
 *
 * Return: 0 on success
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, strlen(str));
	return (0);
}
