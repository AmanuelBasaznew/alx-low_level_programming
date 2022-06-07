#include <main.h>

/**
 * Description: Check for alhapbetic character
 * Return 1 if c is a letter, lower or upper
 */

int _isalpha(int c)
{
	if ( c >= 97 && c <= 122 &&
			c >= 65 && c <= 90)
		return (1);
	return (0);
}
