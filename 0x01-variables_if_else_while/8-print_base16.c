#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints nums of base16 in lowercase, followed by a newline
 *
 * Return: Always 0(Success)
 *
 */

int main(void)
{
	int i = 0;
	int l = 'a';

	for (; i < 10; i++)
		putchar('0' + i % 10);
	for (; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
