#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H

#define buf_size 1024

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
 * err_100_print - print error 100 for unable to close
 * @closer: fd value
 *
 * Return: nothing
 */
void err_100_print(int closer)
{
	dprintf(2, "Error can't close fd %d", closer);
	exit(100);
}
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
