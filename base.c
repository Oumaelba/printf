#include "main.h"
/**
 * un_string - Convert an integer to a string in decimal notation.
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
		if (str == NULL)
	{
		puts("Memory allocation failed");
		exit(1);
	}

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
/**
 * octal - converts a decimal integer to octal and prints it
 *
 * @num: the decimal integer to convert
 *
 * Return: the number of digits in the octal representation of @num
 */
int octal(unsigned int num)
{
	char *onum;
	int i, j, temp;

	i = 0;
	onum = malloc(sizeof(int) * 32);
	if (onum == NULL)
	{
		puts("Memory allocation failed");
		exit(1);
	}
	while (num > 0)
	{
		onum[i] = num % 8 + '0';
		num /= 8;
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = onum[j];
		onum[j] = onum[i - j - 1];
		onum[i - j - 1] = temp;
	}
	_printf("%s", onum);
	free(onum);
	return (j);
}
#include "main.h"

/**
 * _hexalower - convert num to hex lower
 * @num: the number
 * @len: length of the resulting string
 */
void	_hexalower(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (!hex)
		exit(-1);
	if (num > 15)
		_hexalower(num / 16, len);
	_putchar(hex[num % 16]);
	(*len)++;
}

#include "main.h"

/**
 * _hexaupper - convert num to hex upper
 * @num: the number
 * @len: length of the resulting string
 */

void	_hexaupper(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (num > 15)
		_hexaupper(num / 16, len);
	_putchar(hex[num % 16]);
	(*len)++;
}
