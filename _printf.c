#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - new printf
 * @format: format specifier
 * Return: Number of caracters
 */
int _printf(const char *format, ...)
{
	int cp = 0, i = 0;
	int (*mf)(va_list);
	va_list params;

	if (format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
	else
	{
		va_start(params, format);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					putchar(format[i]);
					cp += 1;
					i += 2;
				}
				else if (format[i + 1] == 'u')
				{
					printf("%u", va_arg(params, int));
					i += 2;
				}
				else if (format[i + 1] == 'o')
				{
					printf("%o", va_arg(params, int));
					i += 2;
				}
				else if (format[i + 1] == 'x')
				{
					printf("%x", va_arg(params, int));
					i += 2;
				}
				else if (format[i + 1] == 'X')
				{
					printf("%X", va_arg(params, int));
					i += 2;
				}
				else if (format[i + 1] == 'p')
				{
					printf("%p", va_arg(params, int *));
					i += 2;
				}
				else
				{
					mf = select_function(format[i + 1]);
					if (mf)
					{
						cp += mf(params);
					}
					else
					{
						putchar(format[i]);
						putchar(format[i + 1]);
						cp += 2;
					}
					i += 2;
				}
			}
			else
			{
				putchar(format[i]);
				cp += 1;
				i++;
			}
		}
		va_end(params);
		return (cp);
	}
}
