#include <stdio.h>

/**
 * main - function prints alphabets in lower case
 * Return: ends the program
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
