#include <main.h>

/**
 * Description: Returns the value of the last digit
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
