#include "main.h"

/**
 * print_pointer - Prints the memory address of a pointer
 * @arg: The variable argument list containing the pointer to print
 * @len: The current length of the string being printed
 *
 * Return: The new length of the string being printed
 */

int print_pointer(va_list arg, int len)
{
		void *p = va_arg(arg, void *);

		if (!p)
			len += _putstring("(nil)");
		else
		{
			len += _putstring("0x");
			len += lower_hex((unsigned long)p);
		}
	return (len);
}
