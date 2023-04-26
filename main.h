#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <assert.h>
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
var_cov addition(var_cov store);
var_cov convert_to_binary(var_cov value, long int num);
int convert_to_binary_return_length(long int num);
int un_string(unsigned long num);
int octal(unsigned long num);
int lower_hex(unsigned long num);
int upper_hex(unsigned long num);
int	rev_string(char *s);
int	_non_printable(char *s);
int	char_to_upper_hex(int num);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int print_reversed_string(char *s);
int print_pointer(va_list arg, int len);
int	t_else_if(const char *str, int i, va_list arg, int len, int tmpi);

#endif
