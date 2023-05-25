#ifndef VARIADTC_H
#define VARIADTC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - multiple choice print
 * @x: char Type of print
 * @T_func: funct
 */
typedef struct print
{
	char *x;
	void (*T_func)(va_list);
} t_print;


int sum_tham_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const fotmat, ...);


#endif
