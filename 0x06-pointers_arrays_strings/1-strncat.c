#include "main.h"

/**
 * get_len - returns the length of a string
 *
 * @str: char pointer
 *
 * Return: int
 */

int get_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _strncat - Append at most n bites of src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = get_len(dest);

	while (*src != '\0' && i < n)
	{
		dest[len] = *src;

		len++;
		src++;
		i++;
	}

	dest[len] = '\0';

	return (dest);
}
