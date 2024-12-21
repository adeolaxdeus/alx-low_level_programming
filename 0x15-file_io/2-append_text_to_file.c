#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * append_text_to_file - Append text at the end of a file
 * @filename: Name of file
 * @text_content: NULL terminated string to be append to file
 *
 * Return: 1 on success otherwise -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t numwrite;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	numwrite = write(fd, text_content, strlen(text_content));
	if (numwrite == -1)
		return (-1);
	return (1);
}
