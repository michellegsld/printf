#include "holberton.h"

/**
 * simstr_func - Function to produce output for conversion specifiers c, s & p
 * @c: The specific conversion specifier
 * @v_out: Where the output is saved to
 * @var: What will be added to v_out
 */
void simstr_func(char *c, char *v_out, char *var)
{
	int i;

	switch (*c)
	{
		case 'c':
			v_out[0] = var[0];
			break;
		case 's':
			for (i = 0; var[i] != '\0'; i++)
				v_out[i] = var[i];
			break;
		default:
			break;
	}
}

/**
 * per_func - Function to produce conversion specifier %
 * @v_out: Where output is saved to
 */
void per_func(char *v_out)
{
	v_out[0] = '%';
}
