#include "main.h"


/**
 * rot13 - rotate every character 13 times
 *
 * @s: char pointer
 *
 * Return: char pointer
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rapha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{

			if (s[i] == alpha[j])
			{
				s[i] = rapha[j];
				break;
			}
		}

		i++;
	}

	return (s);
}
