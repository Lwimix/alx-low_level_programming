#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
 * read_textfile - read a file and print it
 * @filename: actual file
 * @letters: number of letters to read and print
 *
 * Return: actual letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t l_read;
	int fd, ret;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		printf("Memory allocation Failed");
		exit(1);
	}
	l_read = read(fd, buf, letters);
	close(fd);
	if (l_read == -1)
		return (0);
	if (l_read == 0)
	{
		buf[0] = '\0';
		return (0);
	}
	buf[l_read] = '\0';
	if ((size_t)l_read > letters)
		ret = write(2, buf, strlen(buf));
	else
		ret = write(1, buf, strlen(buf));
	if (ret == -1 || ret != (int)strlen(buf))
		return (0);
	free(buf);
	return (l_read);
}
