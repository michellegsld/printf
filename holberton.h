#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFSIZE 1024

/**
 * struct charfunc - Struct for flag/conversion characters
 * @charfunc: Specific flag/conversion character
 * @f: The corresponding function name
 */
typedef struct charfunc
{
	char *charfunc;
	char (*f)(char *);
} charfunc;

void itoa_func(char *str, int var);

void str_concat(char *dest, char *str);

void char_func(char *v_out, char var);
void string_func(char *v_out, char *var);
void per_func(char *v_out);

void dec_func(char *v_out, int var);

int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
