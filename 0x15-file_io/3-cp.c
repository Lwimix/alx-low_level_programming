#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include "main.h"

/**
 * main - copy files from one file to another
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char **argv)
{
	int fd, num_char, fd2, close_err, close_err2, num_read;
	char buf[buf_size];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);/*Open file*/
	if (fd == -1)
		err_98_print(argv);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		err_99_print(argv);
	while ((num_read = read(fd, buf, buf_size)) > 0)
	{
		if (num_read == -1)
			err_98_print(argv);
		num_char = write(fd2, buf, num_read);/*Write to new file*/
		if (num_char == -1)
			err_99_print(argv);
	}
	close_err = close(fd);
	if (close_err == -1)
		err_100_print(fd);
	close_err2 = close(fd2);
	if (close_err2 == -1)
		err_100_print(fd2);
	return (0);
}
