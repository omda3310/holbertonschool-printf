#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"
/**
 * print_d - prints a decimal
 * @params: decimal argument
 * Return: counter
 */
int print_d(va_list params)
{

	unsigned int absolute, aux, count, countnum;
	int n;

	count = 0;
	n = va_arg(params, int);
	if (n < 0)
	{
		absolute = (n * -1);
		count += _putchar('-');
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
		count += _putchar(((absolute / countnum) % 10) + '0');
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
