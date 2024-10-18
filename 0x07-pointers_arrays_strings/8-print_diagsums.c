#include <stdio.h>
/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to a square matrix flattened to a linear array
 * @size: Size of square matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int right_diag = 0;
	int left_diag = 0;
	int next_diag;

	while (i < size)
	{
		/**
		 * Computes each diagonal position using maths
		 * expression to determine the next position on
		 * diagonal line of a square matrix, then access
		 * based on the computed expression.
		 */
		next_diag = (i * size + (size - 1 - i));
		right_diag += *(a + next_diag);
		next_diag = (i * size + i);
		left_diag += *(a + next_diag);
		i++;
	}
	printf("%d, %d\n", left_diag, right_diag);
}
