#include "holberton.h"

/**
 * read_textfile - Reads file and prints to stdout
 * @filename: Pointer to the filename
 * @letters: Number of letters to read and write
 *
 * Return: Numner of chars read/printed or 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars_read, chars_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	chars_read = read(fd, buffer, letters);
	if (chars_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	chars_write = write(1, buffer, chars_read);
	if ((chars_write == -1) || (chars_write != chars_read))
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (chars_write);
}
