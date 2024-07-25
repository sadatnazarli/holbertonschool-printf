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

int _printf_s(char *str)
{
        int j = 0;
        char *ptr =  str;

	if (!ptr)
	{
		ptr = "(null)";
	}
        while (ptr[j])
        {
                _putchar(ptr[j]);
                j++;
        }
        return (j);
}


int _printf(const char *format, ...)
{
        int count;
        int i;
        char *str;
        int s;
        char c;

	va_list args;
        va_start(args, format);
	i = 0, count = 0;
	if (!format)
	{
		return (-1);
	}
    while (format && format[i])
    {
            if (format[i] == '%' && format[i + 1])
            {
                    switch(format[i + 1])
                        {
                                case 's':
                                        str = va_arg(args, char*);
                                        s = _printf_s(str);
                                        count += s;
                                        break;
                                case 'c':
                                        c = va_arg(args, int);
                                        _putchar(c);
                                        count++;
                                        break;
                                case '%':
                                        _putchar('%');
                                        count++;
                                        break;
                                default:
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
