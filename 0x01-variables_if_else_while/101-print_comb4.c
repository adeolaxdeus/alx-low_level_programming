#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

	while (num1 < 8)
	{
		num2 = 1;
		while (num2 < 9)
		{
			num3 = 2;
			while (num3 < 10)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1 + 0x30);
					putchar(num2 + 0x30);
					putchar(num3 + 0x30);
					if (num1 != 7 || num2 != 8 || num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
