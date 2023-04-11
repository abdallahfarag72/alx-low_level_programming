#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>

/**
 * create_file -  that creates a file.
 * @filename: file to be read
 * @text_content: string to write to the file
 *
 * Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
			length++;
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
