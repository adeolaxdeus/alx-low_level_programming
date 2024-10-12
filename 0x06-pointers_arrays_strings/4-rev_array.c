/**
 * reverse_array - Reverse an array of integers.
 * @a: Pointer to array of integers.
 * @n: Pointer to number of elements of the array.
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n -= 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
		i++;
	}
}
