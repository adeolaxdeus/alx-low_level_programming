#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Read a text file and print it to the POSIX standard output
 * @filename: File to be read
 * @letters: Numbers of letter it should read and print
 *
 * Return: The actual letter it could read and print on success otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numread, numwrite;
	char *buffer;

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	numread = read(fd, buffer, letters);
	if (numread == -1)
		return (0);
	numwrite = write(STDOUT_FILENO, buffer, numread);
	if (numwrite != numread)
		return (0);
	free(buffer);
	close(fd);
	return (numwrite);
}
