#include "main.h"
#include <unistd.h>
/**
 * print_b - function prints the unsigned int  argument converted to binary
 * @b: unsigned int to print
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
int print_b(va_list b)
{
	unsigned int n, m = 2147483648, j = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	n = va_arg(b, unsigned int);
	a[0] = n / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (n / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
