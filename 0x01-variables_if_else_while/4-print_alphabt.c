#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase, omits q and e
 *
 *  Return: Always 0(Success)
 */

int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
