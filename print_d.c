#include "main.h"
#include <stdlib.h>

#include <unistd.h>
/**
 * print_d - function prints a decimal base 10
 * @i: base 10 integer to print
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



int print_d(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
