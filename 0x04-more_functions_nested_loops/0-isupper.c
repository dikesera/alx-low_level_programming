#include "main.h"

/**
 * _isupper - check if a character is a upper case
 *
 * @c: char
 *
 * Return: 1 for True or 0 for False
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	
	return (0);
}
