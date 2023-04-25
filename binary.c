#include "main.h"

/**
 * _rev - Reverses the order of digits in a binary number.
 * @data: A struct containing the binary number as an array
 * Return: The struct containing the reversed binary number.
 */
var_cov reverse_binary(var_cov data)
{
<<<<<<< HEAD
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < data.i)
		i++;
	i--;
	while (j < i)
	{
		tmp = data.str[i];
		data.str[i] = data.str[j];
		data.str[j] = tmp;
		j++;
		i--;
	}

/**
 * Converts a decimal number to binary.
 *
 * @param value A struct that contains an integer array to store the binary digits and an integer to keep track of the number of digits.
 * @param num The decimal number to convert to binary.
 * @return The binary representation of the input decimal number.
 */

var_cov convert_to_binary(var_cov value, long int num)
{
	int i;

	if (num == 0)
	{
		value.str[value.i] = 0;
		value.i++;
		return (value);
	}

	if (num > 0)
	{
		while (num > 0)
		{
			value.str[value.i] = num % 2;
			num /= 2;
			value.i++;
		}

		return (reverse_binary(value));
	}

	if (num < 0)
	{
		num = labs(num);
		while (num > 0)
		{
			value.str[value.i] = num % 2;
			num /= 2;
			value.i++;
		}

		value = reverse_binary(value);
		i = 0;

		while (i < value.i)
		{
			value.str[i] = !value.str[i];
			i++;
		}

		value = addition(value);
		return (value);
	}
	return (value);
}

/**
 * Adds one to a binary number.
 *
 * @param store The binary number to which one should be added.
 * @return The result of adding one to the input binary number.
 */
var_cov addition(var_cov store)
{
	int i, j;
	int *new_str;

		i = store.i - 1;
	while (i >= 0)
	{
		store.str[i] += 1;

		if (store.str[i] == 1)
		{
			return (store);
		}
		else
		{
			store.str[i] = 0;
		}

		i--;
	}

	new_str = malloc(sizeof(int) * (store.i + 1));
	if (new_str == NULL)
	{
	puts("Memory allocation failed");
	exit(1);
	}
	for (j = 0; j < store.i; j++)
	{
		new_str[j + 1] = store.str[j];
	}
	new_str[0] = 1;
	store.str = new_str;
	store.i++;

	return (store);
}

/**
 * print_adyali - Prints a binary number.
 * @data: A struct containing the binary number as an array of integers
 */

void  print_adyali(var_cov data)
{
	int i;

	i = 0;
	while (i < data.i)
	{
		_printf("%d", data.str[i]);
		i++;
	}
}

/**
 * Converts a decimal number to binary and returns the length of the binary representation.
 *
 * @param num The decimal number to convert to binary.
 * @return The length of the binary representation.
 */

int convert_to_binary_return_length(long int num)
{
	var_cov value;
		int length;
	value.str = malloc(sizeof(int) * 64);
	if (value.str == NULL)
	{
		puts("Memory allocation failed");
		exit(1);
	}
	value.i = 0;

	value = convert_to_binary(value, num);
		print_adyali(value);
	length = value.i;

	free(value.str);

	return (length);
}

