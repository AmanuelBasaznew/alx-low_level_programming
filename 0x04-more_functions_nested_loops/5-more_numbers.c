#include "main.h"
/**
 * more_numbers - prints from 1 - 14 ten times
 *
 * Return: void 
 */
void more_numbers(void)
{
	int i = 0, int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
		i++
	}
}
