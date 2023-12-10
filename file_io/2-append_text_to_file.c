#include "main.h"
#include "fcntl.h"
#include "unistd.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));
	close(fd);

	if (wr == -1)
	return (-1);

	return (1);
}
