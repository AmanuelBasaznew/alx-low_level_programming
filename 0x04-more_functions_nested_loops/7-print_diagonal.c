#include "main.h"
/**
 * print_diagonal - prints lines diagonally based on n
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(' \');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
