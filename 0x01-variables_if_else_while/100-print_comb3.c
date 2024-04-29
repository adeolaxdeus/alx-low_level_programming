#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int firstDigit = 0;
	int secondDigit;

	while (firstDigit < 9)
	{
		secondDigit = 1;
		while (secondDigit < 10)
		{
			if (firstDigit < secondDigit)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				if (firstDigit != 8 || secondDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
