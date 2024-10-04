#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: Pointer to a string
 *
 */
void rev_string(char *s)
{
	char *ptr = s;
	char temp;
	int x = 0, i = 0;

	/* find length of string */
	while (*ptr)
	{
		ptr++;
		x++;
	}
	x--; /* subtract NULL terminator index */

	while (i < x) /* Swap characters from beginning and end simultaneously */
	{
		temp = s[i];
		s[i] = s[x];
		s[x] = temp;
		i++;
		x--;
	}
}
