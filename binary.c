#include "main.h"
/**
 * print_rev - prints an array of integers in reverse order
 * @store: pointer to the array of integers
 *
 * Return: void
 */

void print_rev(int *store)
{
	int i;

	i = 0;
	while (store[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(store[i] + '0');
		i--;
	}
}
/**
 * convert_binary - converts an integer to binary
 * @num: the integer to convert
 *
 * Return: the number of binary digits
 */
int convert_binary(int num)
{
	int i;
	int *store;

	i = 0;
	store = malloc(sizeof(int) * 32);
	while (num > 0)
	{
		store[i] = num % 2;
		num /= 2;
		i++;
	}
	print_rev(store);
	free(store);
	return (i);
}
