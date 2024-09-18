#include <stdio.h>
/**
 * main - Print all possible combination of a single digit number
 *
 * Return: 0 on success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
