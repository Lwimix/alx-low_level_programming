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
	int fd, num_char;
	size_t len;
	char *str;
	
	len = strlen("chmod 600 ");
	str = (char *)malloc((strlen(filename) + len +1));
	if (str == NULL)
		return (0);
	strcpy(str, "chmod 600 ");
	strcat(str, filename);
	printf("%s\n", str);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT);
		if (fd != -1)
		{
			close(fd);
			system(str);
		}
		else
			return (-1);
	}
	free(str);
	fd = open(filename, O_TRUNC);
	if (fd == -1)
	{
		if (errno == ENOENT)
			fd = open(filename, O_CREAT|O_RDWR);
		if (fd == -1)
			return (-1);
	}
	num_char = write(fd, text_content, strlen(text_content));
	if (num_char == 0)
		return (-1);
	else 
		return (1);

}
