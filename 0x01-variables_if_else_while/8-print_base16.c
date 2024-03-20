#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	char alphabet = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (alphabet < 'g')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
