#include "main.h"

/**
 * t_else_if - A helper function for _printf that handles conversions for
 * characters that follow an else-if statement in the format string
 * @str: A pointer to the format string
 * @i: The current index of the format string
 * @arg: The variable argument list
 * @len: The current length of the string being printed
 * @tmpi: A temporary index value used for printing characters
 *
 * Return: The new length of the string being printed
 */

int	t_else_if(const char *str, int i, va_list arg, int len, int tmpi)
{
	if (str[i + 1] == 'c')
		len += _putchar(va_arg(arg, int));
	else if (str[i + 1] == 's')
		len += _putstring(va_arg(arg, char *));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		len += print_number(va_arg(arg, int));
	else if (str[i + 1] == '%')
		len += _putchar('%');
	else if (str[i + 1] == 'b')
		len += convert_to_binary_return_length(va_arg(arg, unsigned int));
	else if (str[i + 1] == 'u')
		len += un_string(va_arg(arg, unsigned long));
	else if (str[i + 1] == 'o')
		len += octal(va_arg(arg, unsigned long));
	else if (str[i + 1] == 'x')
		len += lower_hex(va_arg(arg, unsigned long));
	else if (str[i + 1] == 'X')
		len += upper_hex(va_arg(arg, unsigned long));
	else if (str[i + 1 == 'S'])
		len += _non_printable(va_arg(arg, char *));
	else if (str[i + 1])
	{
		len += _putchar(str[tmpi]);
		_putchar(str[tmpi + 1]);
		len++;
		i++;
	}
	return (len);
}
/**
 * t_print - prints a character or string based on the format specifier
 * @str: pointer to the format string
 * @i: current position in the format string
 * @arg: variable argument list
 * @len: current length of the output
 * @tmpi: holds th value of i
 * Return: the updated length of the output
 */

int	t_print(const char *str, int i, va_list arg, int len, int tmpi)
{
	if (str[i + 1] == 'r')
		len += print_reversed_string(va_arg(arg, char *));
	else if (str[i + 1] == 'p')
		len += print_pointer(arg, len);
	else
			len = t_else_if(str, i, arg, len, tmpi);
	return (len);
}
/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int len;
	va_list arg;
	int tmpi;

	va_start(arg, format);
	i = 0;
	tmpi = 0;
	len = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				tmpi = i;
				while (format[i + 1] == ' ')
				{
					i++;
					if (format[i + 1] != ' ')
						break;
				}
				len = t_print(format, i, arg, len, tmpi);
				i++;
			}
			else if (format[i])
				len += _putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (len);
}
