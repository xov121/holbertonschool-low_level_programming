#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 success, or exits with specific status on failure.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	print_error("Usage: cp file_from file_to\n", NULL, 97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	print_error("Error: Can't read from file ", argv[1], 98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd < 0)
	print_error("Error: Can't write to ", argv[2], 99);

	while ((r = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to_fd, buffer, r);
		if (w != r)
		print_error("Error: Can't write to ", argv[2], 99);
	}
	if (r < 0)
	print_error("Error: Can't read from file ", argv[1], 98);

	close_file(from_fd);
	close_file(to_fd);

	return (0);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: File descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_error - Prints an error message abd exits with a status.
 * @msg: The error message to print.
 * @file: The file name associated with the error.
 * @status: The exit status.
 */
void print_error(char *msg, char *file, int status)
{
	if (file)
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	else
	dprintf(STDERR_FILENO, "%s", msg);
	exit(status);
}
