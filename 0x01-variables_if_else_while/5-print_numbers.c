#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int d = '0';

	while (d <= 9)
	{
		printf("%d", d);
		++d;
	}
	printf("\n");
	return (0);
}
