#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{

	/* sizeof evaluates the size of a variable*/
	printf("Size of a char: %lu byte(s)\n", PRIuPTR, sizeof(char));
	printf("Size of an int: %lu byte(s)\n", PRIuPTR, sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", PRIuPTR, sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", PRIuPTR, sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", PRIuPTR, sizeof(float));

	return(0);

}
