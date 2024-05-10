/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int *temp = a;
	int swap;

	while (*temp)
	{
		temp++;
	}
	temp--;
	while (n > 0)
	{
		swap = *a;
		*a = *temp;
		*temp = swap;
		temp--;
		a++;
	}
}
