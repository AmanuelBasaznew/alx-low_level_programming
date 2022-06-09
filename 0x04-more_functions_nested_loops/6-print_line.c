#include "main.h"
/**
 * print_line - prints a line in the terminal
 * @n: the parameter determing the lenght of the line
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
