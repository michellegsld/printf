# README for \_printf #
![\_printf](https://imgur.com/NoAH5hw)

## Overview ##
The source code files contained here are for implementing a custom printf function.  The printf function produces a formatted output of a string argument to standard output.  It's a highly flexible function that utilizes conversion specifiers to format a string.  In turn, these conversion specifiers has optional flag characters, length modifiers and a precision condition to apply more detailed format specifications.

## Specifications of printf ##

### Conversion Specifiers ###
A conversion specifier begins with the percent character followed by a conversion character.  The following tables summarizes its standard output behavior.

| Conversion |                    Standard Outputs                        |
| Character  |                    Strings or Character(s)                 |
| ---------- | ---------------------------------------------------------- |
|      c     | a single character                                         |
|      s     | an entire string                                           |
|      %     | a percent character, i.e., %                               |
|      p     | the memory address of a pointer in hexadecimal             |
|      S     | an entire string follow by ASCII code value in hexadecimal |
|      r     | an entire string in reverse                                | 
|      R     | an entire string in ROT13                                  |

| Conversion |                    Standard Outputs                        |
| Character  |                    Signed Integers                         |
| ---------- | ---------------------------------------------------------- |
|      d     | a decimal                                                  |
|      i     | a integer                                                  |

| Conversion |                    Standard Outputs                        |
| Character  |                    Unsigned Integers                       |
| ---------- | ---------------------------------------------------------- |
|      f     | a decimal that defaults to 6 digits after the period       |
|      u     | a positive integer                                         |
|      o     | an octal                                                   |
|      x     | a hexadecimal in lowercase                                 | 
|      X     | a hexadecimal in UPPERCASE                                 |
|      b     | a binary                                                   |

### Flag Characters ###
A flag character is between the percent character and conversion character.  The following table summaries its standard output behavior.

| Flag       |                    Standard Outputs                        |
| Character  |                                                            |
| ---------- | ---------------------------------------------------------- |
|      0     | zero padding to the left                                   |
|            | applies to any kind of conversion character                |
|            | ignored when used with -                                   |
|      -     | justified to the left                                      |
|            | applies to any kind of conversion character                |
|            | dependent upon field width                                 |
|      #     | converts to octal or hexadecimal, therefore, dependent on  |
|            | conversion characters: o, x and X                          |
|      +     | positive or negative sign                                  | 
|            | applies to conversion characters: d and i only             |
|    space   | space to indicate positive integer or negative sign        |
|            | applies to conversion characters: d and i only             |


## Goals ##
0. Write a function that produces output according to a format  
1. Handle the conversion specifiers: **d** and **i**  
2. Create a man page for the function  
3. Handle the conversion specifier: **b**  
4. Handle the conversion specifiers: **u o x X**  
5. Use local buffer of 1024 chars to call write as few times as possible  
6. Handle the custom conversion specifier: **S**  
7. Handle the conversion specifier: **p**  
8. Handle the flag characters for non-custom conversion specifier: **+ space #**  
9. Handle the length modifiers: **l h** for non-custom conversion specifiers: **d i u o x X**  
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
	gcc -Wno-format
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

