#include <stdio.h>

/**
 * main - function to print base 10 numbers using putchar (ASCII table is used)
 * Return: void to end programme
 */

int main(void)
{
	int s;

	for (s = 48; s < 58; s++)
		putchar(s);
	putchar('\n');

	return (0);
}
