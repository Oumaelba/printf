#include "main.h"

/**
 * print_number - print a number
 * @n:the number .
 * Return: the value o i
 *
 */

int print_number(int n)
{
	int i = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		i++;
		_putchar('2');
		i++;
		i += print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		i++;
		n *= -1;
		i += print_number(n);
	}
	else if (n > 9)
	{
		i += print_number(n / 10);
		i += print_number(n % 10);
	}
	else if (n <= 9)
	{
		_putchar(n + 48);
		i++;
	}
	return (i);
	}

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: On success, 1. On error, -1 is returned, a
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstring - writes a string to stdout
 * @s: the string to write
 *
 * Return: the number of characters written
 */

int _putstring(char *s)
{
	int i;

	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
