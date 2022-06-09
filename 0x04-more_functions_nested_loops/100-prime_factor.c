#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	int i;
	int max = -1;
	
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i - 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%lu \n", max);
	return (0);
}
