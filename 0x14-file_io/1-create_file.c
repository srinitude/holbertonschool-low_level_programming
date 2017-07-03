#include "holberton.h"

/**
 * _strlen - Computes string length
 * @str: Pointer to string itself
 *
 * Return: Length of string, which may or may not be 0
 *
 */

size_t _strlen(char *str)
{
	size_t len;

	if (str == NULL)
		return (0);
	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * create_file - Creates or truncates a file
 * @filename: Name of the file to create/truncate
 * @text_content: Content to add into the file
 *
 * Return: Success (1) or failure (-1)
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = _strlen(text_content);
		write_result = write(fd, text_content, len);
		if (write_result == -1)
			return (write_result);
	}
	close(fd);
	return (1);
}
