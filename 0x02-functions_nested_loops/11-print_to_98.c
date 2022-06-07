#include "main.h"

/**
 * print_to_98 - returns all numbers until 98
 *
 * @n: start of the return
 *
 * Return: 0 or 1
 */

void print_to_98(int n)
{
	int count;
	
	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
