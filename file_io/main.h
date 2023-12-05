#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/*Function Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*Diy Functions Prototypes*/
void check_args(int argc);
int open_file(char *file, int flags);
void read_write(int fd_from, int fd_to);
void close_file(int fd);


#endif /* MAIN_H */
