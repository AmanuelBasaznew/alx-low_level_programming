#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 * Return: 0
 */
int main(void)
{
	long long int n;
	n = 612852475143;

	long int div = 2, ans = 0, maxFact;
	while(n! = 0)
	{
		if (n % div != 0)
			div = div + 1;
		else {
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lld", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
