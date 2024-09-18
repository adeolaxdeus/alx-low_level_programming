#include <stdio.h>
/**
 * main - Prints  all possible different combinations of three digits.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || (j != 8 || k != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
