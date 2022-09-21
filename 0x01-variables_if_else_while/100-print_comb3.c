#include <stdio.h>

/**
 * main - function print combination of double digit numbers
 * Return: void to end function
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = 49; b < 58; b++)
		{
			if (b > a)
			{	putchar(a);
				putchar(b);
				if (a != 56)
				putchar(',');
				putchar(' ');
			}
			else if (b <= a)
			{};
		}
	}
	putchar('\n');

	return (0);
}
