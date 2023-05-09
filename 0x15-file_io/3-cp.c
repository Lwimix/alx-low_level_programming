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
		err_98_print(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		err_99_print(argv[2]);
	while ((num_read = read(fd, buf, buf_size)) > 0)
	{
		if (num_read == -1)
			err_98_print(argv[1]);
		num_char = write(fd2, buf, num_read);/*Write to new file*/
		if (num_char == -1)
			err_99_print(argv[2]);
	}
	close_err = close(fd);
	if (close_err == -1)
		err_100_print(fd);
	close_err2 = close(fd2);
	if (close_err2 == -1)
		err_100_print(fd2);
	return (0);
}
/**
 * err_98_print - print error 98 for file not exist or can't read
 * @file: file accessed
 *
 * Return: nothing
 */
void err_98_print(char *file)
{
	dprintf(2, "Can't read from file %s\n", file);
	exit(98);
}

/**
 * err_99_print - print error 99 for unable to write
 * @file: file accessed
 *
 * Return: nothing
 */
void err_99_print(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * err_100_print - print error 100 for unable to close
 * @closer: fd value
 *
 * Return: nothing
 */
void err_100_print(int closer)
{
	(void)closer;
	dprintf(2, "Error can't close fd\n");
	exit(100);
}
