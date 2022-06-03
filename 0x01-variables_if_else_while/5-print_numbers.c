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
	int digit = '0';

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
