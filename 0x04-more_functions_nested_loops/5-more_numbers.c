#include "main.h"
/**
 * more_numbers - prints from 1 - 14 ten times
 *
 * Return: void 
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
			putchar(j + '0');
		putchar('\n');
	}
}
