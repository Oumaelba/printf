#include "main.h"

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
