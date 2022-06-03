#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: List numbers in hexadecimal
 *
 * Return: 0
 */

int linked(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');
	return (0);
}
