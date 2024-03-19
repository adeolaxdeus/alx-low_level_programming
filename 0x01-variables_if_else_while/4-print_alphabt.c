#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, followed
 * by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	/* Print all the letters except q and e */
	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
