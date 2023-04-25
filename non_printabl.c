#include "main.h"
#include <limits.h>

/**
 * char_to_upper_hex - convert num to hex upper
 * @num: the number
 *
 * Return: length of the hex string on success, -1 on error
 */
int char_to_upper_hex(int num)
{
	int i, size = 2, len = 2;
	char *hex, *new_hex;
	char *up = "0123456789ABCDEF";

	hex = malloc(size * sizeof(char));
	if (!hex)
		return (-1);
	if (num <= 16)
	{
		_printf("0%c", up[num]);
		free(hex);
		return (2);
	}
	else
	{
		for (i = 0; num != 0; i++)
		{
			hex[i] = up[num % 16];
			if ((unsigned int)size >= (unsigned int)INT_MAX / sizeof(char))
			{
				free(hex);
				return (-1);
			}
			new_hex = _realloc(hex, size * sizeof(char), (size + 1) * sizeof(char));
			if (new_hex == NULL)
			{
				free(hex);
				return (-1);
			}
			hex = new_hex;
			size++;
			num /= 16;
		}
	}
	hex[i] = '\0';
	rev_string(hex);
	_putchar(hex[0]);
	_putchar(hex[1]);
	free(hex);
	return (len);
}

/**
 * _non_printable - prints a string with non-printable characters
 * @s: the string to print
 *
 * Return: the length of the string on success, or -1 on error
 */
int _non_printable(char *s)
{
	int len = 0, hex_len;
	int c;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		c = (unsigned char)*s;
		if (c < 32 || c >= 127 || (c >= 0x80 && c <= 0xFF))
		{
			len += write(1, "\\x", 2);
			hex_len = char_to_upper_hex(c);
			if (hex_len == -1)
			{
				return (-1);
			}
			len += hex_len;
		}
		else
		{
			write(1, s, 1);
			len++;
		}
		s++;
	}
	return (len);
}
