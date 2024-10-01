#include <stdio.h>
/**
 * main - Print 1 to 100.
 *
 * Description: For multiples of 3 print Fizz instead of the number and for
 * multiples of 5 print Buzz. For numbers which are bot multiples of 3 and 5
 * print FizzBuzz.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
