#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "main.h"

/**
 * create_file - create a new file and add text
 * @filename: file created
 * @text_content: conted to be added
 *
 * Return: 1 for SUCCESS, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_char, perm, leng;

	perm = S_IRUSR | S_IWUSR;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, perm);
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
	}
	close(fd);
	return (1);
}
