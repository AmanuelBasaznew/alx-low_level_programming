#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print the alphabet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0; i <= 9; ++i)
	{
		int ch;

		for (ch = 'a' ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
