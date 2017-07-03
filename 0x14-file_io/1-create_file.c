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
	return (++len);
}

/**
 * _strcpy - Copies string into buffer
 * @buf: The buffer to copy the string into
 * @str: The string to copy
 *
 */

void _strcpy(char *buf, char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		buf[i] = str[i];
	buf[i] = '\0';
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
	char *buffer;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (-1);
	_strcpy(buffer, text_content);
	write_result = write(fd, buffer, len);
	close(fd);
	free(buffer);
	if (write_result == -1)
		return (write_result);
	return (1);
}
