#include "main.h"

/**
 * _strlen - function return the string length
 * @s: the string we want to get it length
 * Return: the length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}

	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: 1 on success an -1 on fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte = 0, l = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (l)
	{
		byte = write(fd, text_content, l);
	}
	close(fd);
	return (byte == l ? 1 : -1);
}
