#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * *select_function - select function
 * @c: caracter
 * @va_list: arguments
 * Return: int
 */
int select_function(const char a, va_list params)
{
	int i = 0, j = 0;
	selec tab[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_i}};

	if (tab[i].c == 0)
	{
		_putchar('%');
		_putchar(a);
		return (2);
	}
	while (tab[i].c != 0)
	{
		if (a == tab[i].c)
		{
			j = j + tab[i].f(params);
			return (j);
		}
		i++;
	}
	return (0);
}
