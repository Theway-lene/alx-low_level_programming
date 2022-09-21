#include <stdio.h>

/**
 * main - function prints combination of single digits
 * Return: void to end program
 */

int main(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
