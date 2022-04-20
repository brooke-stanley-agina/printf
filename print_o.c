#include "main.h"
#include <unistd.h>
/**
 * print_o - function that prints an unsigned int in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
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
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int j = 1, m = 1073741824, n, sum = 0;
	int counter = 0;

	n = va_arg(o, unsigned int);
	a[0] = n / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (n / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
