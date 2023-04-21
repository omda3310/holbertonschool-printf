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
/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
/*int print_d(va_list params)
{
	int val = va_arg(params, int);
	printf("%d", val);
	return val;
}*/
int print_d(va_list params)
{

	unsigned int absolute, aux, count, countnum;
	int n;

	count = 0;
	n = va_arg(params, int);
	if (n < 0)
	{
		absolute = (n * -1);
		count += putchar('-');
	}
	else
		absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list params)
{
	return (print_d(params));
}
int print_u(va_list params)
{
	unsigned int n = va_arg(params, unsigned int);
	printf("%u", n);
	return (1);
}
int print_o(va_list params)
{
	int n = va_arg(params, int);
	printf("%o", n);
	return (1);
}
int print_X(va_list params)
{
	int n = va_arg(params, int);
	printf("%X", n);
	return (1);
}
int print_x(va_list params)
{
	int n = va_arg(params, int);
	printf("%x", n);
	return (1);
}
int print_p(va_list params)
{
	int *n = va_arg(params, int *);
	printf("%p", n);
	return (1);
}
