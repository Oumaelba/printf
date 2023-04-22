#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _putstring(char *s);
int	t_print(const char *str, int i, va_list arg, int len, int tmpi);
int _printf(const char *format, ...);

#endif
