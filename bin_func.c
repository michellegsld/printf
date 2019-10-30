#include "holberton.h"

/**
 * bin_func - Function that converts unsigned int to binary
 * @v_out: Variable output
 * @var: Variable sent into _printf
 * @num: Unsigned int to convert to binary
 */
void bin_func(unsigned int num)
{
	unsigned int mask = 1;
/*	unsigned int i;
	
	char var[BUFSIZE];

	for (i = 0; i < BUFSIZE; i++)
		var[i] = '\0';
*/
	while (mask < num)
	{
		mask <<= 1;
		if ((num & mask) == 0)	
			_putchar('0');
		else
			_putchar('1');
	}
	_putchar('\n');
/*	itoa_func(var, mask);
	for (i = 0; var[i] != '\0'; i++)
		v_out[i] = var[i]; */
}
