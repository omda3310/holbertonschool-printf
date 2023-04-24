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
		{'i', print_i},
		{0, NULL}};
	while (tab[i].c != 0)
	{
		if (a == tab[i].c)
		{
			j = j + tab[i].f(params);
			return (j);
		}
		i++;
	}
	if (tab[0].c != a)
	{
		putchar('%');
		putchar(a);
		return (2);
	}
	return (0);
}
