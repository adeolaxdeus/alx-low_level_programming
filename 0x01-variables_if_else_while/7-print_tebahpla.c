#include <stdio.h>
/**
 * main - Print alphabet in reverse order.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphaBet = 'z';

	while (alphaBet >= 'a')
	{
		putchar(alphaBet);
		alphaBet--;
	}
	putchar('\n');
	return (0);
}
