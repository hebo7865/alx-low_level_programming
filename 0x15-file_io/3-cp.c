#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @fr_fd: file from
 * @t_fd: file to
 * @av: arg vector
 */
void error_file(int fr_fd, int t_fd, char *av[])
{
	if (fr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (t_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @av: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *av[])
{
	int fr_fd, t_fd, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fr_fd = open(av[1], O_RDONLY);
	t_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fr_fd, t_fd, av);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fr_fd, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, av);
		nwr = write(t_fd, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, av);
	}

	err_close = close(fr_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr_fd);
		exit(100);
	}

	err_close = close(t_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr_fd);
		exit(100);
	}
	return (0);
}
