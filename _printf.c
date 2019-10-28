#include "holberton.h"

void set_nullbyte(char *var);

int find_len(char *v_fin);

/**
 * _printf - Produces an output according to format
 * @format: A string containing what to print and output
 *
 * Return: Always the number of characters printed
 */
int _printf(const char *format, ...)
{	char var_fin[BUFSIZE];
	char var_out[BUFSIZE];
	int i = 0, j = 0, len = 0, flag = 0;
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
				if (format[i] == 'd' || format[i] == 'i')
					dec_func(var_out, va_arg(list, int));
				else if (format[i] == 'c')
					char_func(var_out, va_arg(list, int));
				else if (format[i] == 's')
					string_func(var_out, va_arg(list, char *));
				else if (format[i] == '%')
					per_func(var_out);
				else if (format[i - 2] == '%')
				{
					var_fin[j] = format[i];
					j++;
					break;
				}
				else
					break;
				flag = 1;
				break;
			default:
				if (format[i - 1] != '%')
				{
					var_fin[j] = format[i];
					j++;
				}
				break;
		}
		i++;
		if (flag == 1)
		{
			j++;
			str_concat(var_fin, var_out);
			for (j = 0; var_fin[j] != '\0'; j++)
				;
			set_nullbyte(var_out);
			flag = 0;
		}
	}

	len = find_len(var_fin);
	write(1, var_fin, len);

	va_end(list);
	return (len);
}

/*
 * charfunc num[] = {
 *	{"d", dec_func},
 *	{"i", dec_func},
 *	{NULL, NULL}
 *};
 *
 *
 *charfunc string[] = {
 *	{"c", simstr_func},
 *	{"s", simstr_func},
 *	{"%", per_func},
 *	{NULL, NULL}
 *};
 *
 *	int i, j, n, x = 0, len, cs_flag = 0, len_fin = 0;
 *	char *cs;
 *	char *var_per[BUFSIZE];
 *
 *
 *	while ((format) && (format[i] != '\0'))
 *	{
 *	if (format[i] == "%")
 *		{
 *			j = 0;
 *			i++;
 *			while((format[j + i] != '\0') && (cs_flag != 1))
 *			{
 *				var_per[j] = format[i + j];
 *				j++;
 *				len++;
 *				cs_flag = is_conspec(format[(j + i) - 1]);
 *			}
 *		else
 *
 *		{
 *			var_fin[n] = format[i];
 *			n++;
 *		}
 *		if (cs_flag == 1)
 *		{
 * //			if (*num[x].charfunc == format[i + len])
 * //				var_out = num[x].f(format[i + len]);
 *			if (*string[x].charfunc == format[i + len])
 *				cs = *string[x].charfunc;
 *				var_out = num[x].f(format[i + len]);
 *
 *		i++;
 *		cs_flag = 0;
 *		}
 *	}
 *
 *	while (var_fin[len_fin] != '\0')
 *		len_fin++;
 *
 *	write(1, var_fin, len_fin);
 *
 *	return (len_fin);
 */

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
 * find_len - Finds the length of a string
 * @v_fin: The string's length to be found
 *
 * Return: Always the length of the string
 */
int find_len(char *v_fin)
{
	int len = 0;

	while (v_fin[len] != '\0')
		len++;

	return (len);
}