#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/* Prototype */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int fd);
void print_error(char *msg, char *file, int status);

#endif /* MAIN_H */
