#ifndef FILE_IO
#define FILE_IO

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* FILE_IO */
