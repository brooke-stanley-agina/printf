#include "main.h"
/**
 * print_s - function prints a string
 * @s: prints a string
 * Return: 1
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
