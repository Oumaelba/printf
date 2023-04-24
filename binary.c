#include "main.h"
#include <stdio.h>
/**
 * _rev - Reverses the order of digits in a binary number.
 * @data: A struct containing the binary number as an array
 * Return: The struct containing the reversed binary number.
 */
var_cov _rev(var_cov data)
{
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
	return (data);
}
/**
 * converter - Converts a decimal number to binary.
 * @value: A struct containing the binary number as an array
 * @num: The decimal number to convert to binary.
 *
 * Return: The struct containing the binary number.
 */
var_cov converter(var_cov value, long long num)
{
	while (num > 0)
	{
		value.str[value.i] = num % 2;
		num /= 2;
		value.i++;
	}
	return (value);
}
/**
 * addition - Adds one to a binary number.
 * @store: A struct containing the binary number as an array.
 *
 * Return: The struct containing the added binary number.
 */
var_cov addition(var_cov store)
{
	int i = store.i - 1;

	while (i >= 0)
	{
		store.str[i] += 1;
		if (store.str[i] == 1)
		{
			store.str[i] = 1;
			return (store);
		}
		else
		{
			store.str[i] = 0;
		}
		i--;
	}
	return (store);
}
/**
 * mirroring - Mirrors a binary number.
 * @value: A struct containing the binary number as an array
 *
 * Return: The struct containing the mirrored binary number.
 */
var_cov mirroring(var_cov value)
{
	int i = 0;

	while (i < value.i)
	{
		value.str[i] = 0 ? value.str[i] == 1 : value.str[i] == 0;
		i++;
	}
	return (value);
}
/**
 * convert_binary - Converts a decimal number to binary and prints it.
 * @num: The decimal number to convert to binary.
 *
 * Return: The length of the binary number.
 */
int convert_binary(long long num)
{
	var_cov hold;

	hold.i = 0;
	hold.str = malloc(sizeof(int) * 32);
	if (num == 0)
	{
		hold.i = _putchar('0');
		return (hold.i);
	}
	if (num > 0)
	{
		hold = converter(hold, num);
		hold = _rev(hold);
		print_adyali(hold);
		return (hold.i);
	}
	if (num < 0)
	{
		num = num * -1;
		hold = converter(hold, num);
		hold = _rev(hold);
		hold = mirroring(hold);
		hold = addition(hold);
		print_adyali(hold);
	}
	free(hold.str);
	return (hold.i);
}
