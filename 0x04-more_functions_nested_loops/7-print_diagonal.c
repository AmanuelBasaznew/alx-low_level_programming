#include "main.h"
/**
 * print_diagonal - prints lines diagonally based on n
 * @n: numer of diagonals to be printed
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
	_putchar('\n');
}
