#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 00;
	int num2;

	while (num1 < 99)
	{
		num2 = 01;
		while (num2 < 100)
		{
			if (num2 > num1)
			{
				putchar(num1 / 10 + 0x30);
				putchar(num1 % 10 + 0x30);
				putchar(' ');
				putchar(num2 / 10 + 0x30);
				putchar(num2 % 10 + 0x30);
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
