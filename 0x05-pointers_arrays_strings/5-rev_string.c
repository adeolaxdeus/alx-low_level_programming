/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end)
	{
		end++;
	}
	end--;
	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
