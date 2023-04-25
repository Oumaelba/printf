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
	onum[i] = '\0';

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