#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct var_cov - Custom data type to store binary numbers
 *
 * @str: Integer pointer to an array that stores the binary digits
 * @i: Integer value indicating the number of binary digits in the array
 */

typedef struct var_cov
{
		int *str;
		int i;
} var_cov;


int print_number(int n);
int _putchar(char c);
int _putstring(char *s);
int	t_print(const char *str, int i, va_list arg, int len, int tmpi);
int _printf(const char *format, ...);
void print_adyali(var_cov data);
var_cov reverse_binary(var_cov data);
var_cov converter(var_cov value, long num);
var_cov addition(var_cov store);
var_cov  mirroring(var_cov value);
var_cov convert_to_binary(var_cov value, long int num);
int convert_to_binary_return_length(long int num);
#endif
