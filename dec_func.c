#include "holberton.h"

/**
 * dec_func - Function to produce output for conversion specifiers d & i
 * @v_out: where output is saved to
 * @var: variable sent into printf
 */
void dec_func(char *v_out, int var)
{
	int i;
	char num[BUFSIZE];

	for (i = 0; i < BUFSIZE; i++)
		num[i] = '\0';

	itoa_func(num, var);

	for (i = 0; num[i] != '\0'; i++)
		v_out[i] = num[i];
}
