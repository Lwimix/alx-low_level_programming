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
	int fd, num_char, fd2, close_err, close_err2, closer, num_read;
	char buf[buf_size];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);/*Open file*/
	if (fd == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num_read = read(fd, buf, buf_size);/*Copy contents to buffer*/
	if (num_read == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		err_print(argv);
	num_char = write(fd2, buf, num_read);/*Write to new file*/
	if (num_char == -1)
		err_print(argv);
	close_err = close(fd);
	close_err2 = close(fd2);
	closer = (close_err == -1) ? fd : fd2;
	if (close_err == -1 || close_err2 == -1)
	{
		dprintf(2, "Error can't close fd %d", closer);
		exit(100);
	}
	return (0);
}
