#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet - 32);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
