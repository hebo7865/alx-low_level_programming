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
 * create_file - creates a file
 * @filename: name of file will create
 * @text_content: content of the file
 * Return: 1 on success, -1 if fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte = 0, l = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
