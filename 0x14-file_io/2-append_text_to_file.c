#include "holberton.h"

/**
 * string_len - Computes length of string
 * @str: The string to compute length for
 *
 * Return: Length of string which may be 0
 *
 */

size_t string_len(char *str)
{
	size_t len;

	if (str == NULL)
		return (0);
	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * append_text_to_file - Appends text to a file if possible
 * @filename: Pointer to the file
 * @text_content: The string to append to the file
 *
 * Return: Success (1) or failure (-1)
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content == NULL)
		return (1);
	len = string_len(text_content);
	write_result = write(fd, text_content, len);
	close(fd);
	if (write_result == -1)
		return (write_result);
	return (1);
}
