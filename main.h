#ifndef MY_PRINTF
#define MY_PRINTF
#include <stdio.h>
#include <stdarg.h>
/**
 * struct selector - struct selector
 * @c: caracter
 * @f: function associated
 *
 */
typedef struct selector
{
	char *c;
	int (*f)(va_list);
} selec;
int _printf(const char *format, ...);
int print_c(va_list params);
int print_s(va_list params);
int print_d(va_list params);
int print_i(va_list params);
int print_percent(va_list params);
int (*select_function(char c))(va_list);
#endif
