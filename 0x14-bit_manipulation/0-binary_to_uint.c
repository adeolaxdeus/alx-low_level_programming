#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 1s and 0s
 *
 * Return: Converted number or 0 if b consist of 1 or more chars
 * that's not 0 & 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0;
	int i = 0, j;

	if (b == NULL)
		return (0);
	j = strlen(b) - 1;
	while (j >= 0)
	{
		if (b[j] == '0' || b[j] == '1')
			decimal_num += (b[j] - '0') << i;
		else
			return (0);
		i++;
		j--;
	}
	return (decimal_num);
}
