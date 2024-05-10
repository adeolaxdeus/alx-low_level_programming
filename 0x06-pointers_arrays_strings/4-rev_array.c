/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int temp, end = n - 1, index = 0;

	while (index < end)
	{
		temp = a[index];
		a[index] = a[end];
		a[end] = temp;
		index++;
		end--;
	}
}
