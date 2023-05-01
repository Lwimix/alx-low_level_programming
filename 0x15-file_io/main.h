#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#define buf_size 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void err_99_print(char *file);
void err_98_print(char *file);
void err_100_print(int closer);
int append_text_to_file(const char *filename, char *text_content);

#endif
