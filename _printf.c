#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"
/**
 * _printf - new printf
 * @format: format specifier
 * Return: Number of caracters
 */
int _printf(const char *format, ...)
{
	int cp = 0, i = 0, mf = 0;
	va_list params;
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	else
	{
		va_start(params, format);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					_putchar(format[i]);
					cp += 1;
					i += 2;
				}
				else
				{
					mf = select_function(format[i + 1], params);
					if (mf)
						cp += mf;
					else
					{
						_putchar(format[i]);
						_putchar(format[i + 1]);
						cp += 2;
					}
					i += 2;
				}
			}
			else
			{
				_putchar(format[i]);
				cp += 1;
				i++;
			}
		}
		va_end(params);
		return (cp);
	}
}
