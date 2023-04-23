#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int print_number(int n);
int _putchar(char c);
int _putstring(char *s);
int	t_print(const char *str, int i, va_list arg, int len, int tmpi);
int _printf(const char *format, ...);
int convert_binary(int num);
void print_rev(int *store, int size);

#endif
