#include "main.h"
#include <unistd.h>
/**
 * print_S - function prints a string & non printable characters ASCII values
 * @S: print string
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
int print_S(va_list S)
{
	unsigned int i = 0;
	int counter = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += print_x(S);
		}
		else
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
