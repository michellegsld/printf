#include "holberton.h"

/**
 * simstr_func - Function to produce output for conversion specifiers c, s & p
 * @c: The specific conversion specifier
 * @v_out: Where the output is saved to
 * @var: It's contents only matters for c, s while p needs it's address
 *
 * Return: Nothing
 */
void simstr_func(char *c, char *v_out, char *var)
{
	int i, j, k;
	int len = 0;
	char *add = (char *)&var;

	switch (*c)
	{
		case 'c':
			v_out[0] = var[0];
			v_out[1] = '\0';
			break;
		case 's':
			for (i = 0; add[i] != '\0'; i++)
				len++;
			for (j = 0; j <= len; j++)
				v_out[j] = add[j];
			break;
		case 'p':
			for (i = 0; add[i] != '\0'; i++)
				len++;
			for (k = 0; v_out[k] <= len; k++)
				v_out[k] = add[k];
		default:
			break;
	}
}

/**
 * per_func - Function to produce conversion specifier %
 * @v_out: Where output is saved to
 *
 * Return: Nothing
 */
void per_func(char *v_out)
{
	v_out[0] = '%';
	v_out[1] = '\0';
}
