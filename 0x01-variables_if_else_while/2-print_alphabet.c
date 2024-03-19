#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet >= 'a' && alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
