#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
