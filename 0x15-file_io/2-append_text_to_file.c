#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends a new text at end of file
 * @filename: file created
 * @text_content: conted to be added
 *
 * Return: 1 for SUCCESS, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_char, leng, perm;

	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, perm);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		leng = strlen(text_content);
		num_char = write(fd, text_content, leng);
		if (num_char != leng)
		{
			close(fd);
			return (-1);
		}
		write(fd, "\n", 1);
	}
	close(fd);
	return (1);
}
