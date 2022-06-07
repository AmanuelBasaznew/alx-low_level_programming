#include "main.h"

/**
 * _abs - returns the absolute value
 *
 * @n: is the number whose absolute is calculated
 *
 * Return: 0 or 1
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
