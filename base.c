#include "main.h"
/**
 * decimal_string - Convert an integer to a string in decimal notation.
 *
 * @num: The integer to convert.
 *
 * Return: The number of digits in the resulting string.
 */

int un_string(unsigned int num)
{
	char *str;
	int i, j;
	char temp;

	i = 0;
	str = malloc(20 * sizeof(char));

	while (num > 0)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	_printf("%s", str);
	free(str);
	return (j);
}
