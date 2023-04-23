#include "main.h"

/**
 * print_rev - Prints an array of integers in reverse order.
 * @store: Pointer to the array of integers to be printed.
 * @size: The size of the array.
 */
void print_rev(int *store, int size)
{
	int i;

	i = 0;
	while (i < size)
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(store[i] + '0');
		i--;
	}
}

/**
 * convert_binary - Converts a decimal number to binary and prints it.
 * @num: The decimal number to be converted.
 *
 * Return: The number of digits in the binary representation.
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
	print_rev(store, i);
	free(store);
	return (i);
}
