#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFSIZE 1024

/**
 * struct - Struct for flag/conversion characters
 * @charfunc: Specific flag/conversion character
 * @f: The corresponding function name
 */
typedef struct
{
	char *charfunc;
	char (*f)(char);
} charfunc;

/* int _strlen(char *s); 0x05 #2 get string length (TO BE INCLUDED)*/
/* void _putchar(char *s); 0x08 #0 print char  (TO BE INCLUDED)*/
/* void print_rev(char *s); 0x05 #4 print string in reverse  (WRITTEN BELOW)*/
/* char *rot13(char *encode); 0x06 #8 print rot13 for encrytion  (WRITTEN BELOW)*/

/* char precision_func(char *c, char *v_out, char *var); Depends on 'f' and '.' (TO BE INCLUDED)*/


void str_concat(char *v_out);

/*
 * void char_func(char *v_out, char var);
 * void string_func(char *v_out, char *var)
 */
void simstr_func(char *c, char *v_out, char *var);
void per_func(char *v_out);

void dec_func(char *c, char *v_out, char *var);

int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
