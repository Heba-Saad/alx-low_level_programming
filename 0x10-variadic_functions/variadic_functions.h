#ifndef VARIADTC_H
#define VARIADTC_H

#include <stdarg.h>
#include <stdio.h>

int sum_tham_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const fotmat, ...);


#endif
