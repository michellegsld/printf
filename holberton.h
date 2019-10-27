#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER 1024
/* ui = (unsigned int)INT_MAX + 1024; */

/**
 * struct - Struct for flag characters
 * @charfunc: flag characters 
 * @f: function
 */
typedef struct
{
	char *charfunc;
	char (*f)(char);
} charfunc;

/* int _strlen(char *s); 0x05 #2 get string length */
/* void _putchar(char *s); 0x08 #0 print char */
/* void print_rev(char *s); 0x05 #4 print string in reverse */
/* char *rot13(char *encode); 0x06 #8 print rot13 for encrytion */

int _printf(const char *format, ...);
/* char flag_zero(char); may use */
/* char flag_dash(char); may use */
/* char flag_pound(char); may use */
/* char flag_pos(char); may use */
/* char flag_space(char); may use */

#endif /* HOLBERTON_H */
