#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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
	int fd, numwrite;
	ssize_t numread;
	char *buffer;

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	numread = read(fd, buffer, letters);
	if (numread == -1)
		return (0);
	buffer[numread] = '\0';
	numwrite = dprintf(STDOUT_FILENO, "%s", buffer);
	if (numwrite != numread)
		return (0);
	return (numwrite);
}
