#include <stdio.h>
/**
 * main - Print numbers from 0 to 9 using putchar().
 *
 * Return: 0 on success.
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0'); /* convert nim to ascill value */
		num++;
	}
	putchar('\n');
	return (0);
}
