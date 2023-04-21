#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * *select_function - select function
 * @c: caracter
 * @va_list: arguments
 * Return: function
 */
int (*select_function(char a))(va_list)
{
	int i = 0;
	selec tab[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"u", print_u},
		{"p", print_p},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"%", print_percent}};
	while (tab[i].c)
	{
		if (a == tab[i].c[0])
		{
			return (tab[i].f);
		}
		i++;
	}

	return (NULL);
}
