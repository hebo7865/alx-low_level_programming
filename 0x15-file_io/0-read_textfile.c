#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file we will read
 * @letter: the number of letters it should read and print
 * Return: always 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t byte;
    char buf[READ_BUF_SIZE * 8];

    if (!filename || !letters)
    {
        return (0);
    }
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        return (0);
    }
    byte = read(fd, &buf[0], letters);
    byte = write(STDOUT_FILENO, &buf[0], byte);
    close(fd);
    return (byte);
}
