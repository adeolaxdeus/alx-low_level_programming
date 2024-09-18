#include <stdio.h>
/**
 * main - Print all numbers of hexadecimal.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int num = 0;
	char alphaBet = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (alphaBet <= 'f')
	{
		putchar(alphaBet);
		alphaBet++;
	}
	putchar('\n');
	return (0);
}
