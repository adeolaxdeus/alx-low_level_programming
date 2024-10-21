#include <stdlib.h>
/**
 * create_array - Create an array of chars.
 * @size:  Size of array to be created
* @c: Character to initialize array with
*
* Description: create an array with dynamic memory allocation
* and initialize it with a specific character
*
* Return: Pointer to array of char on success otherwise NULL
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
