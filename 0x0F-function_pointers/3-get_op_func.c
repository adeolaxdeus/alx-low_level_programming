#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Select the correct function to perform
 * the operation asked by user
 * @s: Pointer to operand passed by user
 *
 * Return: Pointer to function that matches the operand
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
