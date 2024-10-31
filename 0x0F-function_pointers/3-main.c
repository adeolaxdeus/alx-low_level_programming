#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Performs basic maths operation
 * @argc: Number of arguments passed by user
 * @argv: Pointer to arguments passed by user
 *
 * Return: Answer to the operation perform otherwise 99 if
 * invalid operand is entered or 100 if user try to divide,
 * modulus by 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	func function;
	char operand = argv[2][0];

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operand == '/' || operand == '%') && (num2 == 0))
	{
		puts("Error");
		exit(100);
	}
	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", function(num1, num2));
	return (0);
}
