#include "main.h"
/**
 * swap_int - Swaps the value of two integers.
 * @a: Pointer to memory a.
 * @b: Pointer to memory b.
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
