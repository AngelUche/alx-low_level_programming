#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif

