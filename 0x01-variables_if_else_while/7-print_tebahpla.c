#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char hc = 'z';

	while (hc >= 'a')
	{
		putchar(hc);
		--hc;
	}
	putchar('\n');
	return (0);
