#include "holberton.h"

/**
 * itoa_func - Converts a number into a string
 * @str: Where output is saved to
 * @var: Number sent into _printf to convert
 */
void itoa_func(char *str, long int var)
{
	int flag = 0, i = 0;
	long int len = 1000000000000000000;

	if (var < 0)
	{
		str[i] = '-';
		i++;
		if (var % 10 == (-8))
		{
			flag = 1;
			var += 1;
		}
		var = (-var);
	}

	for (; len != 1;)
	{
		if (var >= len)
		{
			str[i] = ((var / len) % 10) + '0';
			i++;
		}
		len = len / 10;
	}

	if (flag == 1)
		str[i] = ((var % 10) + 1) + '0';
	else
		str[i] = ((var % 10) + '0');
}
