/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 *
 * Return: the number of bytes in the initial segment of s which,
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, index;

	while (*s && *s != ' ')
	{
		index = 0;
		while (accept[index] != '\0')
		{
			if (accept[index] == *s)
			{
				count++;
				break;
			}
			index++;
		}
		s++;
	}
	return (count);
}
