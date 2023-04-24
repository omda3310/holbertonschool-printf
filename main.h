#ifndef MY_PRINTF
#define MY_PRINTF
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct selector - struct selector
 * @c: caracter
 * @f: function associated
 *
 */
typedef struct selector
{
	char c;
	int (*f)(va_list);
} selec;
int _printf(const char *format, ...);
int print_c(va_list params);
int print_s(va_list params);
int print_d(va_list params);
int print_i(va_list params);
/**
int print_u(va_list params);
int print_p(va_list params);
int print_x(va_list params);
int print_X(va_list params);
int print_o(va_list params);
*/
int print_percent(va_list params);
int _putchar(char c);
int select_function(const char c, va_list params);
#endif
