#include "holberton.h"

/**
 * char_func - Function to produce output for conversion specifier: c
 * @v_out: variable output
 * @var: pass-in variable
 */
void char_func(char *v_out, char var)
{
	v_out[0] = var[0];
}

/**
 * string_func - Function to produce output for conversion specifier: s
 * @v_out: variable output
 * @var: pass-in variable
 */
void string_func(char *v_out, char *var)
{
	int i;

	for (i = 0; var[i] != '\0'; i++)
	{
		v_out[i] = var[i];
	}
}

/**
 * per_func - Function to produce output for conversion specifier: %
 * @v_out: variable output
 */
void per_func(char *v_out)
{
	v_out[0] = '%';
}
