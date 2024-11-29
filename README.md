# Project Printf

This repository contains C program for _printf() function written as part of the Low-level programming and Algorithm project at Holberton School. The program is the implementation of C language function printf() which prints the formatted output.

# Project overview

**Compilation:**

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

**Betty coding style:**

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

[Betty style documentation](https://github.com/alx-tools/Betty/wiki)

**Authorized functions and macros:**

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

# Function prototypes

All function prototypes used to compile _printf() are included in the header file main.h:

* int _putchar(char c);
* int _printf(const char *format, ...);
* int specifier(char c, va_list args);
* int (*get_op_function(char specifier))(va_list);
* int print_char(va_list args);
* int print_string(va_list args);
* int print_percent(va_list args);
* int print_integer(va_list args);

# File description

* _printf - Produces formatted output.
* _putchar - writes the character c to stdout
* get_op_function - Returns a function corresponding to a specifier
* op_functions.c: - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%'
* struct op(main.h) - structure to map a specifier to its function

# Flowchart

![Simple_Flowchart_Infographic_Graph](https://github.com/user-attachments/assets/f7939f8e-cdac-4bd4-acc8-bd0af9498ce2)

# Function description


