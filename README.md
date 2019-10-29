# README for \_printf #
![\_printf](https://i.imgur.com/0SpuyVJ.png)

## Overview ##
The source code files contained here are for implementing a custom printf function called \_printf.  The \_printf function produces a formatted output of a string argument to standard output.  It's a highly flexible function that utilizes conversion specifiers to format a string.  In turn, these conversion specifiers has optional flag characters, length modifiers and a precision condition to apply more detailed format specifications.


## Specifications ##
The following tables summarizes the standard output behavior of \_printf when using conversion specifiers.

### Conversion Specifiers ###
A conversion specifier begins with the percent character followed by a conversion character.

| Specifier  | Standard Output for Strings or Character(s)                |
| ---------- | ---------------------------------------------------------- |
|      c     | a single character                                         |
|      s     | an entire string                                           |
|      %     | a percent character, i.e., %                               |
|      p     | the memory address of a pointer in hexadecimal             |
|      S     | an entire string follow by ASCII code value in hexadecimal |
|      r     | an entire string in reverse                                | 
|      R     | an entire string in ROT13                                  |

| Specifier  | Standard Output for Signed Integers                        |
| ---------- | ---------------------------------------------------------- |
|      d     | a decimal                                                  |
|      i     | a integer                                                  |

| Specifier  | Standard Output for Unsigned Integers                      |
| ---------- | ---------------------------------------------------------- |
|      f     | a decimal that defaults to 6 digits after the period       |
|      u     | a positive integer                                         |
|      o     | an octal                                                   |
|      x     | a hexadecimal in lowercase                                 | 
|      X     | a hexadecimal in UPPERCASE                                 |
|      b     | a binary                                                   |

### Flag Characters ###
A flag character is used between the percent character and conversion character.

| Flag       | Standard Output                                            |
| ---------- | ---------------------------------------------------------- |
|      0     | 1. zero padding to the left  					   	      |
|            | 2. applies to any kind of conversion character             |
|            | 3. ignored when used with -                                |
|      -     | 1. justified to the left                                   |
|            | 2. applies to any kind of conversion character             |
|            | 3. dependent upon field width                              |
|      #     | 1. converts to octal or hexadecimal                        |
|            | 2. dependent on conversion characters: o, x and X          |
|      +     | 1. pads with a positive or negative sign                   |
|            | 2. applies to conversion characters: d and i only          |
|    space   | 1. space to indicate positive integer or negative sign     |
|            | 2. applies to conversion characters: d and i only          |

### Length Modifiers ###
A length modifier is used before the conversion character.

| Modifier   | Standard Output                                                                         |
| ---------- | --------------------------------------------------------------------------------------- |
|      l     | deals with long integers when applied to conversion characters: d and i                 |
|            | deals with unsigned long integers when applied to conversion characters: u, o, x and X  |
|      h     | deals with short integers when applied to conversion characters: d and i                |
|            | deals with unsigned short integers when applied to conversion characters: u, o, x and X |


## Goals ##
0. Write a function that produces output according to a format  
1. Handle the conversion specifiers: **d** and **i**  
2. Create a man page for the function  
3. Handle the conversion specifier: **b**  
4. Handle the conversion specifiers: **u, o, x, X**  
5. Use local buffer of 1024 chars to call write as few times as possible  
6. Handle the custom conversion specifier: **S**  
7. Handle the conversion specifier: **p**  
8. Handle the flag characters for non-custom conversion specifier: **+ space #**  
9. Handle the length modifiers: **l, h** for non-custom conversion specifiers: **d, i, u, o, x, X**  
10. Handle the field width for non-custom conversion specifiers  
11. Handle the precision for non-custom conversion specifiers  
12. Handle the flag character for non-custom conversion specifier: **0**  
13. Handle the flag character for non-custom conversion specifier: **-**  
14. Handle the custom conversion specifier: **r**  
15. Handle the custom conversion specifier: **R**  
16. All the above tasks should operate cohesively together


## Requirements ##
0. Authorized functions: write, malloc, free, va\_start, va\_end, va\_arg, va\_copy
1. Header file: holberton.h
2. Betty style: <https://github.com/holbertonschool/Betty/blob/master/betty-style.pl>
3. Compile: 
```shell
	gcc -Wall -Wextra -Werror -pedantic *.c 
	gcc -Wno-format *.c
```
4. Standard libraries: 
```C
	#include <unistd.h>
	#include <<stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
```


## Resources ##
0. man 3 printf
1. man 2 write
2. man 3 malloc
3. man 3 free
4. man 3 va\_start
5. man 3 va\_end
6. man 3 va\_arg
7. man 3 va\_copy
8. Secrets of “printf” by Professor Don Colton
<https://www.cypress.com/file/54761/download>


## Contributors ##
Michelle Giraldo  
Jennifer Tang

