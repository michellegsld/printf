# Overview #


# Specifications of printf #
0. 



# Goals #
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
13. Handle the flag character for non-custom conversion specifier:**-**  
14. Handle the custom conversion specifier: **r**  
15. Handle the custom conversion specifier: **R**  
16. All the above tasks should operate cohesively together


# Requirements #
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
	#inlcude <stdarg.h>
```


# Resources #
0. man 2 write
1. man 3 malloc
2. man 3 free
3. man 3 va\_start
4. man 3 va\_end
5. man 3 va\_arg
6. man 3 va\_copy
7. Secrets of “printf” by Professor Don Colton
<https://www.cypress.com/file/54761/download>


# Contributors #
Michelle Giraldo
Jennifer Tang


