#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int	t_print(const char *str, int i, va_list arg, int len)
{

	if (str[i + 1] == 'c')
			len += _putchar(va_arg(arg, int));
	else if (str[i + 1] == 's')
			len += _putstring(va_arg(arg, char *));
	else if (str[i + 1] == '%')
					len += _putchar('%');
	return (len);
}
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int len;
	va_list arg;

	va_start(arg, format);
	i = 0;
	len = 0;
	if (!format || format[1] == '\0')
		return (-1);
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				len = t_print(format, i, arg, len);
			}
			i++;
		}
	}
	va_end(arg);
	return (len);
}
int main()
{
	int pours, ptheres = 0; 
	pours = _printf("%c %c %s", 'H', 'e', "zayna");
	printf("\n%d\n",pours);
	ptheres = printf("%c %c %s", 'H', 'e', "zayna");
	printf("\n%d\n",ptheres);
}