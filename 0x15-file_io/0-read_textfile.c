#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: name of the file.
 * @letters: number of characters.
 *
 * Return: the file.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t read_only;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to read only\n");
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	read_only = read(fd, buff, letters);
	if (read_only == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	return (read_only);
}
