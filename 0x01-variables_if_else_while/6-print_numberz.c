#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers with putchar
 *
 * Return: 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar((digit));
		++digit;
	}
	putchar('\n');
	return (0);
}
