#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * check_for_specifiers - checks if there is a valid format specifer
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
*/


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

/* Definition of _putchar */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int (*check_for_specifiers(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}

/**
 * _printf - function for printing format
 * @format: list arguments for printing
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count);
}






