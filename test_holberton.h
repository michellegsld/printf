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

charfunc flag[] = {
	{"0", flag_zero},
	{"-", flag_just},
	{"#", flag_pound},
	{"+", flag_plus},
	{" ", flag_space},
	{NULL, NULL}
};

charfunc num[] = {
	{"X", hex_func},
	{"x", hex_func},
	{"o", oct_func},
	{"u", undec_func},
	{"b", bin_func},
	{"d", dec_func},
	{"i", dec_func},
	{NULL, NULL}
};

charfunc string[] = {
	{"c", char_func},
	{"s", string_func},
	{"%", per_func},
	{"r", rev_func},
	{"R", rot13_func},
	{NULL, NULL}
};

/* int _strlen(char *s); 0x05 #2 get string length (TO BE INCLUDED)*/
/* void _putchar(char *s); 0x08 #0 print char  (TO BE INCLUDED)*/
/* void print_rev(char *s); 0x05 #4 print string in reverse  (WRITTEN BELOW)*/
/* char *rot13(char *encode); 0x06 #8 print rot13 for encrytion  (WRITTEN BELOW)*/

/* char precision_func(char *c, char *v_out, char *var); Depends on 'f' and '.' (TO BE INCLUDED)*/


void str_concat(char *v_out);

/* String prototypes: */
void char_func(char *v_out, char var);
void string_func(char *v_out, char *var)
void per_func(char *v_out);
void rev_func(char *v_out, char *var);			//will reverse *var into *v_out: called for 'r'
void rot13_func(char *v_out, char *var);		//will rot13 *var into *v_out: called for 'R'

/* Number prototypes: */	//would these *var be chars or were they supposed to be num?
				//maybe within func... they are done atoi() then the num is convert.
void hex_func(char *c, char *v_out, char *var);		//unsure about return type: called for 'x' 'X'
void oct_func(char *v_out, char *var);			//unsure about return type and char *c: called for 'o'
void undec_func(char *v_out, char *var);		//^: called for 'u'
void bin_func(char *v_out, char *var);			//^^: called for 'b'
void dec_func(char *c, char *v_out, char *var);		//unsure about return type: called for 'd' 'i'

/* Flag prototypes: */		//unsure about the need of *var in any of these
				//the *c is important ==> will be the con. specifier, decides if this works?
				//do we need to send in another variable that accounts for field width?
void flag_zero(char *c, char *v_out, char *var, int width);	//including width as output depends on it
void flag_just(char *c, char *v_out, char *var, int width);	//^
void flag_pound(char *c, char *v_out, char *var);
void flag_plus(char *c, char *v_out, char *var);
void flag_space(char *c, char *v_out, char *var);

int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
