
💡 _printf:
In our First Holberton school group project pair programing we work on making our own _printf, We make it From 0 to 100 by using VS CODE and VI.

💡 Description:
_printf is a custom implementation of the C programming function printf. Similar to the printf (3) - Prints formatted data to stdout

Printf() function is often used to our program to do formatted output. All variants of printf function use the same formatting techniques. There is a string that specifies the layouts of output is call format specifier.

📋 Function prototype

int _printf(const char *format, ...);
where format can be a simple string without any specifiers or it can contain specifiers and the arguments corresponding to them.

📋 Implemented format specifiers
Specifier:	Output	Example
c	Character	H
s	String	I am a string !
d	decimal integer	100
i	Integer	100
%	% followed by another %	%

Check the Man Page for detailed usage.

🛠️ Compilation and testing
We are compiling via:
$ gcc -Wall -Werror -Wextra -pedantic *.c
EXEMPLE
_printf("print d :%d\n", -762534);

the output :

print d : -762534
📋 What our file stand for:
main.h :The Header file
functions.c: This file contains the functions to handle each argument type like (s, c, %).
more_functions.c : This file contains the function to handle each argument type like (d, i)
select_function.c : this file containe the function how cheks function
_putchar.c : This file contains the standard function (_putchar).
📋 Functions used:
write
va_start
va_end
va_arg
Author:
AYED Imed