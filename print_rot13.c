#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * print_R - function prints the rot13'ed string
 * @R: string to print
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
int print_R(va_list R)
{
	char *str;
	unsigned int i = 0, j = 0;
	int counter = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				counter++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}


