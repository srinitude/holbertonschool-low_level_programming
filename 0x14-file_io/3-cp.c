#include "holberton.h"

/**
 * error_out - Error helper function
 * @code: The error code
 * @fd: File descriptor
 * @name: Name of the respective file
 *
 */

void error_out(int code, int fd, const char *name)
{
	switch (code)
	{
	case 97:
		dprintf(fd, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(fd, "Error: Can't read from file %s\n", name);
		exit(98);
	case 99:
		dprintf(fd, "Error: Can't write to %s\n", name);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	default:
		break;
	}
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments passed
 *
 * Return: Always success (0)
 *
 */

int main(int argc, const char *argv[])
{
	int from_fd, to_fd, f_close, t_close;
	char buffer[1204];
	ssize_t read_len, write_len;

	if (argc != 3)
		error_out(97, STDERR_FILENO, NULL);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		error_out(98, STDERR_FILENO, argv[1]);
	to_fd = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		error_out(99, STDERR_FILENO, argv[2]);
	read_len = 1204;
	while (read_len == 1204)
	{
		read_len = read(from_fd, buffer, 1204);
		if (read_len == -1)
			error_out(98, STDERR_FILENO, argv[1]);
		write_len = write(to_fd, buffer, (size_t)read_len);
		if (write_len == -1)
			error_out(99, STDERR_FILENO, argv[2]);
	}
	f_close = close(from_fd);
	if (f_close == -1)
		error_out(100, from_fd, NULL);
	t_close = close(to_fd);
	if (t_close == -1)
		error_out(100, to_fd, NULL);
	return (0);
}
