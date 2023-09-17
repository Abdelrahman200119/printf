#include "main.h"

/**
 * _printf - funcion that produces output according to a format
 * @format: format according to witch will be printed
 * return: return numbers of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;
	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (*format)
	{
		if (format != '%')
		{
			write(1, format, 1)
		}
		format++;
	}
	return (count);
}
