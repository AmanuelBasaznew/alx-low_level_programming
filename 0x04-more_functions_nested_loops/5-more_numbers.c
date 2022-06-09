#include "main.h"
/**
 * more_numbers - prints from 1 - 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int i, int r;

	for (i = 0; i < 11; i++)
	{
		for (r = 0; r < 15; r++)
			_putchar(r + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
