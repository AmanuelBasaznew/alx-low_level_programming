#include "main.h"

/**
 * _isalpha - checks if a character isboth lower and uppercase
 *
 * @c: takes input from other functions
 *
 * Return: 1 is c if true else 0
 */

int _isalpha(int c)
{
		return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
