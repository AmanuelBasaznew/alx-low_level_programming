#include <main.h>

/**
 * Description: Print the sign of a number
 * Return: 1 and prints positive, returns 0 and
 * print 0, return -1 and prints negative
 */

int print_sign(int n)
{
	if (n>0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 +48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
