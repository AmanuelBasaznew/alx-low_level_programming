#include "main.h"

/**
 * print_sign - Prints the sign of an integer
 *
 * @n: is the number whose sign is determined
 *
 * Return: 1 is positive 0 is 0 and -1 is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
