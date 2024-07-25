#include "main.h"
#include <stdlib.h>
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
 *  _printf_di - printf for %d and %i conversion specifier.
 *  @n: given number
 *  Return: length of number
 */
int _printf_di(int n)
{
	int a, i, j, count;
	int *arr;

	i = 0, count = 0;
	if (n == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	arr = malloc(4);
	while (n / 10)
	{
		a = n % 10;
		arr[i] = a;
		n = n / 10;
		arr = realloc(arr, sizeof(arr) + 4);
		i++;
	}
	arr = realloc(arr, sizeof(arr) + 4);
	arr[i] = n;
	j = i;
	for (; i >= 0; i--)
	_putchar('0' + arr[i]);
	return (j + 1 + count);
}
/**
 *  _printf - printf.2
 *  @format: what we are going to print with printf
 *  Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count;
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
					count += _printf_s(va_arg(args, char*));
					break;
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 'd':
				case 'i':
					count += _printf_di(va_arg(args, int));
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
