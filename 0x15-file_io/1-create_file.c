#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
/**
 * create_file - Create  a file
 * @filename: Name of file to be create
 * @text_content: NULL terminated string to be written to file
 *
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, const char *text_content)
{
	int fd;
	ssize_t numwrite;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	numwrite = write(fd, text_content, strlen(text_content));
	if (numwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
