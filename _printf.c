#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Prints a character to stdout followed by a newline
 * @c: The character to be printed
 *
 * Description: This function prints the character @c to the standard output
 *              (stdout), followed by a newline character '\n'.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 *  _printf_s - printf for %s conversion specifier.
 *  @str: given string
 *  Return: length of string
 */
int _printf_s(char *str)
{
	int j = 0;
	char *ptr =  str;

	if (!ptr)
		ptr = "(null)";
	while (ptr[j])
	{
		_putchar(ptr[j]);
		j++;
	}
	return (j);
}

/**
 *  _printf - printf.2
 *  @format: what we are going to print with printf
 *  Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, s, count;
	va_list args;

	va_start(args, format);
	i = 0, count = 0;
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
				case 's':
					s = _printf_s(va_arg(args, char*));
					count += s;
					break;
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				default:
					if (format[i + 1] == '%')
						i += 1;
					_putchar('%');
					count++;
					i = i - 1;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	return (count);
}
