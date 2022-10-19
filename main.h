#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct specifier - struct to choose function to handle a format
 * @c: format specifier
 * @f: pointer to printing function
 */
typedef struct specifier
{
	char *c;
	int (*f)(va_list li);
} f_sp;

/* Function Prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int select_format(char ch, va_list li);
int print_string(va_list args);
int print_char(va_list args);
int validate_char(char ch);
#endif /* _MAIN_H_ */
