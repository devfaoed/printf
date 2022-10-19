#include "main.h"

/**
 * select_format - selects the right function
 * for a specifier
 *
 * @ch: specifier
 *
 * @li: variadic list
 *
 * Return: pointer to printing function, otherwise 0
 */
int select_format(char ch, va_list li)
{
	int i = 0;
	f_sp spec[] = {
		{"c", print_char},
		{"s", print_string}
	};

	while (i < 2)
	{
		if (ch == *spec[i].c)
			return (spec[i].f(li));
		i++;
	}
	return (0);
}


/**
 * validate_char - checks if a char is a valid specifier
 *
 * @ch: char
 *
 * Return: 1 when valid, 0 when invalid
 */
int validate_char(char ch)
{
	char specs[3] = "cs";
	int i = 0;

	while (specs[i] != '\0')
	{
		if (ch == specs[i])
			return (1);
		i++;
	}
	return (0);
}
