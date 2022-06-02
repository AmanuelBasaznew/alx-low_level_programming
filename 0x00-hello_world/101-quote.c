#include <unistd.h>

/**
 *main - Serves as an entry point
 *
 *Description: Printing a quote using the write function
 
 *ssize_t write(int fd, const void *buf, size_t count);
 *
 *Return: This time we return an error 1.
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
