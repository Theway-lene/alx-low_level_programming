#include <stdio.h>

/**
 * main - to print hexadecimal numbers with putchar
 * Return: void returned to end program
 */

int main(void)
{
	char a;
	char b;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
