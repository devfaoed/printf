#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: format specifiers
 * Return: No of chars printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int length = 0;

	va_list li;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' &&  !format[2])
		return (-1);

	va_start(li, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			while (*format == ' ')
				format++;
			if (*format == '%')
			{
				_putchar('%');
				length++;
			}
			if (validate_char(*format) != 0)
				length += select_format(*format, li);
			else
				return (-1);
		}
		else
		{
			_putchar(*format);
			length++;
		}
		format++;
	}

	va_end(li);
	return (length);
}
