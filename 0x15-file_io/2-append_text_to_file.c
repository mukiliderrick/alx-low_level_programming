#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 *append_text_to_file - append a text at the end.
 *@filename: the name of the file.
 *@text_content: the content of the file.
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_w, length = 0;

	fd = open(filename, O_WRONLY, O_APPEND);
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd_w = write(fd, text_content, length);
	if (fd == 1 || fd_w == -1)
		return (-1);

	close(fd);
	return (1);
}
