#include <stdio.h>
/**
 * main - main segment
 * Description: computes fibonacci up until 98
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned __int64 a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%llx", next);

		if (i < 97)
			printf(", ");
		++i;
	}
	putchar('\n');
	return (0);
}
