#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: exit status.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char *file_from, *file_to, buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read) {
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	if (close(fd_to) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
		exit(100);
	}
	return (0);
}
