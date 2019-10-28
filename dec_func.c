#include "holberton.h"

/**
 * dec_func - Function to produce output for conversion specifiers d & i
 * @c: conversion specifiers
 * @v_out: where output is saved to
 * @var: variable for _printf
 */
void dec_func(char *c, char *v_out, char *var)
{
	int i;
	
	if ((c = 'd' || c = 'i') && var >= 0)
	{
		for (i = '0'; var[i] != '\0'; i++)
		{	
			v_out[i] = var[i];
		}
	}
	else if ((c = 'd' || c = 'i') && var < 0)
	{
		_putchar('-');
		for (i = '0'; var[i] != '\0'; i++)
		{
			v_out[i + 1] = _putchar('-') + var[i];
		}
	}
}
