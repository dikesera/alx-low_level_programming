#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: using write print what was given.
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
char don[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, don, 59);
return (1);
}
