#include "main.h"

/**
* print_reversed_string - prints the reversed string of the argument
* @s: the string to reverse
*
* Return: the length of the reversed string
*/
int print_reversed_string(char *s)
{
	int len = 0;
	int i;

	if (s == NULL)
		return (_putstring("(null)"));
	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		len += _putchar(s[i]);
	return (len);
}
