#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_c - print caracter
 * @params: caracter
 * Return: caracter
 */
int print_c(va_list params)
{
	int c;

	c = va_arg(params, int);
	return (putchar(c));
}
/**
 * print_s - print string
 * @params: strings
 * Return: number of caracters
 */
int print_s(va_list params)
{
	char *s;
	int i = 0, c = 0;

	s = va_arg(params, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
		c++;
	}
	return (c);
}
/**
 * print_percent - print percent
 * @params: argument
 * Return: percent
 */
int print_percent(va_list params)
{
	char *s;
	s = "%";
	if (*s == va_arg(params, int))
	{
		return (*s);
	}
	return (*s);
}
