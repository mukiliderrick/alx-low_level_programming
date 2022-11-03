#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - a function for creating a file.
 * @filename: name of the file.
 * @text_content: content of the file
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename || !text_content)
		return (0);
	fd = open(filename,O_CREAT | O_WRONLY,0700);
	if (fd == -1)
	{
		printf("file created succesffully\n");
		exit(1);
	}
	close(fd);
	return(0);
}
