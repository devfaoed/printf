#include "main.h"

/**
 * print_char - prints a single char
 * @li: va_list
 * Return: 1
 */
int print_char(va_list li)
{
	_putchar(va_arg(li, int));
	return (1);
}

/**
 * print_string - prints a string
 * @li: va_list
 * Return: length of string
 */
int print_string(va_list li)
{
	char *s = va_arg(li, char *);
	int i = 0;

	if (*s)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	else
	{

		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	return (i);
}
