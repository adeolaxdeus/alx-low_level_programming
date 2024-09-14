#include <stdio.h>
/**
 * main - Print number [0-9] in decimal base.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
