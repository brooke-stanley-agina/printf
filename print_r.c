#include "main.h"
#include <unistd.h>
#include <unistd.h>
/**
 * print_r - function prints a string in reverse
 * @r: string to print
 * Return: number of printed characters
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
int print_r(va_list r)
{
	char *str;
	int i = 0, counter = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
