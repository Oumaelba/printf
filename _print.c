#include "main.h"

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

	va_start(arg, format);
	i = 0;
	len = 0;
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
					len += _putchar(va_arg(arg, int));
				else if (format[i + 1] == 's')
					len += _putstring(va_arg(arg, char *));
				else if (format[i + 1] == '%')
					len += _putchar('%');
					}
			i++;
		}
	}
	va_end(arg);
	_putchar('\n');
	return (len);
}
