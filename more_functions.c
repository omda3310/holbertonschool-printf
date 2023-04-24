#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"
/**
 * print_d - prints a decimal
 * @args: decimal argument
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
/**
int print_u(va_list params)
{
    unsigned int n = va_arg(params, unsigned int);
    printf("%u", n);
    return (1);
}
int print_o(va_list params)
{
    unsigned int n = va_arg(params, unsigned int);
    printf("%o", n);
    return (1);
}
int print_X(va_list params)
{
    unsigned int n = va_arg(params, unsigned int);
    printf("%X", n);
    return (1);
}
int print_x(va_list params)
{
    unsigned int n = va_arg(params, unsigned int);
    printf("%x", n);
    return (1);
}
int print_p(va_list params)
{
    int *n = va_arg(params, int *);
    printf("%p", n);
    return (1);
}*/
