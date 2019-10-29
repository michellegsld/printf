#include "holberton.h"

/**
 * itoa_func - Converts a number into a string
 * @mod: Determines what kind of int
 * @c: The specific conversion specifier
 * @str: Where output is saved to
 * @var: Variable sent into printf
 */
void itoa_func(char *str, int var)
{
	int flag = 0, i = 0;
	int len = 1000000000;

	if (var < 0)
	{
		str[i] = '-';
		i++;
		if (var % 10 == 8)
		{
			flag = 1;
			var = var + 1;
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

/*
 *	switch (*mod)
 *	{
 *		case 'l':
 *			switch (*c)
 *			{
 *				case 'd':
 *				case 'i':
 *					len = (long int)len;
 *					len = 1000000000000000000;
 *					break;
 *				default:
 *					len = (unsigned long int)len;
 *					len = 10000000000000000000;
 *					break;
 *			}
 *			break;
 *
 *		case 'h':
 *			if (*c == 'd' || *c == 'i')
 *				len = (short int)len;
 *			else
 *				len = (unsigned short int)len;
 *			len = 10000;
 *			break;
 *		default:
 *			if (*c == 'd' || *c == 'i')
 *				len = (int)len;
 *			else
 *				len = (unsigned int)len;
 *			len = 1000000000;
 *			break;
 *	}
 */
