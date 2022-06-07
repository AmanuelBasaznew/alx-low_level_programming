#include "main.h"

/**
 * print_last_digit - returns the last digit of n
 *
 * @n: is the number to check last digit
 *
 * Return: 0 or 1
 */

int print_last_digit(int)
{
	int lastDigit;
	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
