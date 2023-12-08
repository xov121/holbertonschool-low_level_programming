#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the name of the file.
 * @letter: Number of letters it should read and print.
 *
 * Return: Actual number of letters it could read and print,
 * 				0 if the file cannot be opened or read, if filename is NULL,
 * 				or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
	{
	return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1 || nwritten != nread)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (nwritten);
}
