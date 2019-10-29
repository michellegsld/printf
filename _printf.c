#include "holberton.h"

void set_nullbyte(char *var);

unsigned long write_func(char *v_fin, unsigned long len);

/**
 * _printf - Produces an output according to format
 * @format: A string containing what to print and output
 *
 * Return: Always the number of characters printed
 */
int _printf(const char *format, ...)
{
	static char var_fin[BUFSIZE];
	static char var_out[BUFSIZE];
	int i = 0, j = 0, flag = 0;
	unsigned long len = 0;
	va_list list;

	set_nullbyte(var_fin);
	set_nullbyte(var_out);

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case '%':
				i++;
				if (format[i] == '\0')
					return (-1);
				else if (format[i] == '%')
					per_func(var_out);
				else if (format[i] == 'l')
				{
					i++;
					if (format[i] == 'd' || format[i] == 'i')
						dec_func(var_out, va_arg(list, long));
					else
						dec_func(var_out, va_arg(list, unsigned long));
					flag = 1;
					break;
				}
				else if (format[i] == 'h')
				{
					i++;
					if (format[i] == 'd' || format[i] == 'i')
						dec_func(var_out, va_arg(list, int));
					else
						dec_func(var_out, va_arg(list, unsigned int));
					flag = 1;
					break;
				}
				else if (format[i] == 'd' || format[i] == 'i')
					dec_func(var_out, va_arg(list, int));
				else if (format[i] == 'c')
					char_func(var_out, va_arg(list, int));
				else if (format[i] == 's')
					string_func(var_out, va_arg(list, char *));
				else
					break;
				flag = 1;
				break;
			default:
				var_fin[j] = format[i];
				j++;
				break;
		}
		i++;
		if (j == BUFSIZE && (flag == 1 || format[i] != '\0'))
		{
			len = write_func(var_fin, len);
			j = 0;
		}
		if (flag == 1)
		{
			str_concat(var_fin, var_out);
			for (j = 0; var_fin[j] != '\0'; j++)
				;
			set_nullbyte(var_out);
			flag = 0;
		}
	}

	va_end(list);
	return (write_func(var_fin, len));
}

/**
 * set_nullbyte - Will fill a string array with nullbytes
 * @v_fin: The string array to fill with nyllbytes
 */
void set_nullbyte(char *v_fin)
{
	int i = 0;

	while (i < BUFSIZE)
	{
		v_fin[i] = '\0';
		i++;
	}
}

/**
 * write_func - Outputs a string and keeps track of a string length
 * @var_fin: The string
 * @len1: The length of the output
 *
 * Return: Always the length of var_fin
 */
unsigned long int write_func(char *var_fin, unsigned long len1)
{
	unsigned long len2 = 0;

	while (var_fin[len2] != '\0')
		len2++;

	write(1, var_fin, len2);
	set_nullbyte(var_fin);

	len2 += len1;
	return (len2);
}
