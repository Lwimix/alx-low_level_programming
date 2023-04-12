#ifndef MAIN_H
#define MAIN_H

#define buf_size 1024

/**
 * err_print - print error 99 for unable to write
 * @file: file accessed
 *
 * Return: nothing
 */
void err_print(char **file)
{
	dprintf(2, "Error: Can't write to %s\n", file[2]);
	exit(99);
}
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
