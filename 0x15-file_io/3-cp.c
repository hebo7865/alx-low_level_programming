#include "main.h"

#define USAGE "Usage: cp file_from file_to"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: arg count
 * @av: arg vector
 * Return: 1 on success 0 on fail
*/
int main(int ac, char **av)
{
	int fr_fd = 0, t_fd = 0;
	ssize_t byte;
	char buff[READ_BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	fr_fd = open(av[1], O_RDONLY);
	if (fr_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	if (t_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	}
	while ((byte = read(fr_fd, buff, READ_BUF_SIZE)) > 0)
	{
		if (write(t_fd, buff, byte) != byte)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
		}
	}
	if (byte == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	fr_fd = close(fr_fd);
	t_fd = close(t_fd);
	if (fr_fd)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fd), exit(100);
	}
	if (t_fd)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fd), exit(100);
	}
	return (EXIT_SUCCESS);
}
