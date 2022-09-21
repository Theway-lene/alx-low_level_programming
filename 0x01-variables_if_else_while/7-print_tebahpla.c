#include <stdio.h>

/**
 * main - function prints alphabets in reverse order
 * Return: void to end program
 */

int main(void)
{
	char lene = 'z';
		while (lene >= 'a')
		{
			putchar(lene);
		lene--;
		}
		putchar('\n');
	return (0);
}
