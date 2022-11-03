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
	ssize_t reading;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to read only\n");
		return (0);
	}
	buff = malloc(sizeof(buff));
	if (buff == NULL)
		return (0);

	reading = read (fd, buff, letters);
	close(fd);
	return (reading);
}
