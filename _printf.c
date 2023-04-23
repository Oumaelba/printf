#include "main.h"

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
	if (str[i + 1] == 'c')
		len += _putchar(va_arg(arg, int));
	else if (str[i + 1] == 's')
		len += _putstring(va_arg(arg, char *));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		len += print_number(va_arg(arg, int));
	else if (str[i + 1] == '%')
		len += _putchar('%');
	else if (str[i + 1] == 'b')
		len += convert_binary(va_arg(arg, int));
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
					{
						break;
					}
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
