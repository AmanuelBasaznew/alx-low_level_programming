#include <stdio.h>
/**
 * main - main segment
 * Description: computes fibonacci up until 98
 * Return: 0
 */
int main(void)
{
	int i = 0;
	float a, b, r;
	a = 1;
	b = 2;
	r = 0;

	printf("1, 2");
	for (i = 1; i <= 96; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %0.f", r);
	}
	putchar('\n');
	return (0);
}
